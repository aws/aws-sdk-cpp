/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/LambdaConfigType.h>
#include <aws/cognito-idp/model/StatusType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>A user pool description.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolDescriptionType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UserPoolDescriptionType
  {
  public:
    UserPoolDescriptionType();
    UserPoolDescriptionType(Aws::Utils::Json::JsonView jsonValue);
    UserPoolDescriptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID in a user pool description.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID in a user pool description.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID in a user pool description.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID in a user pool description.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID in a user pool description.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID in a user pool description.</p>
     */
    inline UserPoolDescriptionType& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID in a user pool description.</p>
     */
    inline UserPoolDescriptionType& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID in a user pool description.</p>
     */
    inline UserPoolDescriptionType& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name in a user pool description.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name in a user pool description.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name in a user pool description.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name in a user pool description.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name in a user pool description.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name in a user pool description.</p>
     */
    inline UserPoolDescriptionType& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name in a user pool description.</p>
     */
    inline UserPoolDescriptionType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name in a user pool description.</p>
     */
    inline UserPoolDescriptionType& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The AWS Lambda configuration information in a user pool description.</p>
     */
    inline const LambdaConfigType& GetLambdaConfig() const{ return m_lambdaConfig; }

    /**
     * <p>The AWS Lambda configuration information in a user pool description.</p>
     */
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }

    /**
     * <p>The AWS Lambda configuration information in a user pool description.</p>
     */
    inline void SetLambdaConfig(const LambdaConfigType& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }

    /**
     * <p>The AWS Lambda configuration information in a user pool description.</p>
     */
    inline void SetLambdaConfig(LambdaConfigType&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::move(value); }

    /**
     * <p>The AWS Lambda configuration information in a user pool description.</p>
     */
    inline UserPoolDescriptionType& WithLambdaConfig(const LambdaConfigType& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>The AWS Lambda configuration information in a user pool description.</p>
     */
    inline UserPoolDescriptionType& WithLambdaConfig(LambdaConfigType&& value) { SetLambdaConfig(std::move(value)); return *this;}


    /**
     * <p>The user pool status in a user pool description.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The user pool status in a user pool description.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The user pool status in a user pool description.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The user pool status in a user pool description.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The user pool status in a user pool description.</p>
     */
    inline UserPoolDescriptionType& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The user pool status in a user pool description.</p>
     */
    inline UserPoolDescriptionType& WithStatus(StatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date the user pool description was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date the user pool description was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date the user pool description was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date the user pool description was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date the user pool description was last modified.</p>
     */
    inline UserPoolDescriptionType& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date the user pool description was last modified.</p>
     */
    inline UserPoolDescriptionType& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The date the user pool description was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the user pool description was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date the user pool description was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the user pool description was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the user pool description was created.</p>
     */
    inline UserPoolDescriptionType& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the user pool description was created.</p>
     */
    inline UserPoolDescriptionType& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    LambdaConfigType m_lambdaConfig;
    bool m_lambdaConfigHasBeenSet;

    StatusType m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
