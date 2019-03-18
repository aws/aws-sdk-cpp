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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MachineLearning
{
namespace Model
{

  /**
   * <p>The database credentials to connect to a database on an RDS DB
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/RDSDatabaseCredentials">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API RDSDatabaseCredentials
  {
  public:
    RDSDatabaseCredentials();
    RDSDatabaseCredentials(Aws::Utils::Json::JsonView jsonValue);
    RDSDatabaseCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetUsername() const{ return m_username; }

    
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    
    inline RDSDatabaseCredentials& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    
    inline RDSDatabaseCredentials& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    
    inline RDSDatabaseCredentials& WithUsername(const char* value) { SetUsername(value); return *this;}


    
    inline const Aws::String& GetPassword() const{ return m_password; }

    
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    
    inline RDSDatabaseCredentials& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    
    inline RDSDatabaseCredentials& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    
    inline RDSDatabaseCredentials& WithPassword(const char* value) { SetPassword(value); return *this;}

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
