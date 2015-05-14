Example 1 Instructions

This example demonstrates:
(1) Using Cognito to identity unauthenticated users (authentication to come later)
(2) Using DynamoDb to store and retrieve user data

The example contains a simple databinding system that might be worth extending and moving into the DynamoDb library if enough use cases are covered.

Before building and running this example, certain steps need to be taken in order to set up state on your AWS account (via the console) that will allow this example to run properly.  
These steps are very simplified versions of the kind of one-time set up you would do as part of game development.  In a real game, you would not make the developer user
credentials available to the game client because the game client would not be doing any schema management.

Set up a developer user.  This user will be used to verify and/or install the simple Db schema used by the example.  In a real application, these credentials would not be needed and would
not be included in your app.
1) Go to the AWS Console, select Identity & Access Management

2) select Groups, then Create New Group
2a) name it "Example1DeveloperGroup"
2b) For permissions, use the "Power User Access" policy template
2c) Click through and finish creating the group

3) select Users, then Create New Users
3a) name it "Example1Developer"
3b) download the credentials
3c) At the users screen, select the Example1Developer user
3d) select Add User To Group and choose the "Example1DeveloperGroup"

4) From the drop down menu in the upper right of the console, select My Account, write down or copy the value for AccountId; this will be used in later steps

5) update your default credentials file
5a) Locate the credentials file that you downloaded in step 3b
5b) If you do not have an existing default credentials file (look for a file named "credentials", no extension, in the .aws directory underneath your home directory, ~/.aws in Linux, 
    likely C:\Users\<UserName>\.aws on Windows) then make one.
5c) Open the file and add a new entry block to it:
    [example1developer]
    aws_access_key_id=<the first string after "Example1Developer" in the downloaded credentials file, should be around 20 characters in length>
    aws_secret_access_key=<the second string after "Example1Developer" in the downloaded credentials file, shoule be around 40 characters in length>
    aws_account_id=<the account id you recorded in step 4>

Set up cognito to allow for unauthenticated logins

6) Go to the AWS Console, select Cognito, Select Get Started if you have no Cognito data, otherwise select New Identity Pool
6a) Name your identity pool "Example1_Pool" (at the very minimum, the pool name must start with "Example1_" as that's how the pool is found by the example)
6b) Click the box to allow unauthenticated logins
6c) Click Create Pool
6d) Click Update Roles

7) Go to the AWS Console, select Identity & Access Management
7a) Select Roles, Select Cognito_Example1_PoolUnauth_DefaultRole (or similar, based on what you named your pool in 6a)
7b) Select Attach Policy.  The permissions you set up for this role will determine what unauthenticated users are able to do with the example app.
7c) Choose Policy Generator and click Select.
7d) At the AWS Service drop down, select Amazon DynamoDb
7e) At the actions dialog, check the following: GetItem, PutItem
7f) At the arn text box, use "arn:aws:dynamodb:us-east-1:{account_id}:table/PlayerData", where {account_id} is from step 4.  If you want to examine your db tables while playing with the example,
    you will need to select the N. Virginia region (us-east-1) from the drop down menu in the upper right of the console before selecting the DynamoDb service.
7g) Click Next Step and then Apply Policy

At this point, you should be able to successfully build and run the example.  Runtime instructions for the example TBI.

Optional additional steps

Set up authenticated login via Cognito
TBI

Set up fine-grained access to the PlayerData table
This step augments the cognito-linked role permissions to only allow reading and writing rows of the PlayerData that correspond to the requesting identity (you can't mess with another identity's data)

8 Go to the AWS Console, select Identity & Access Management
8a) Select Roles, Select Cognito_Example1_PoolUnauth_DefaultRole (or similar)
8b) Find the policy NOT named "Cognito_Authentication_Policy"  and click Manage Policy for it.  You should see a JSON representation of the policy you made and applied in step 7.
8c) After the "Resource" entry, as a sibling, add an additional entry for "Condition":
      "Condition": {
        "ForAllValues:StringEquals": {
          "dynamodb:LeadingKeys":  ["${cognito-identity.amazonaws.com:sub}"]
        }
      }

8d) Click Apply Policy
8e) If you use the "forge" command, which attempts to read data from a garbage row, you will now get an error rather than success (but no data).