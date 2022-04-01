# Credentials Providers
You can use the AWSCredentialProvider interface to provide login credentials to AWS Auth. Implement this interface to provide your own method of credentials deployment. We also provide default credential providers.

## Default Credential Provider Chain
The default credential provider chain does the following:
1. Checks your environment variables for AWS Credentials
2. Checks your $HOME/.aws/credentials file for a profile and credentials
3. Contacts and logs in to a trusted identity provider (Cognito, Login with Amazon, Facebook, Google). The sdk looks for the login information to these providers either on the enviroment variables: AWS_ROLE_ARN, AWS_WEB_IDENTITY_TOKEN_FILE, AWS_ROLE_SESSION_NAME. Or on a profile in your $HOME/.aws/credentials.
4. Checks for an external method set as part of a profile on $HOME/.aws/config to generate or look up credentials that isn't directly supported by AWS.
5. Contacts the ECS TaskRoleCredentialsProvider service to request credentials if Environment variable AWS_CONTAINER_CREDENTIALS_RELATIVE_URI has been set. 
6. Contacts the EC2MetadataInstanceProfileCredentialsProvider service to request credentials if AWS_EC2_METADATA_DISABLED is NOT set to ON. 

The simplest way to communicate with AWS is to ensure we can find your credentials in one of these locations.

## Other Methods
We also support two other methods for providing credentials:
* Provide your credentials in your client’s constructor.
* Use Amazon Cognito Identity, which is an identity management solution. You can use the CognitoCaching*CredentialsProviders classes in the identity-management project. For more information, see the *Amazon Cognito Developer Guide*.