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
#include <aws/greengrass/Greengrass_EXPORTS.h>

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
namespace Greengrass
{
namespace Model
{

  /**
   * Specifies the user and group whose permissions are used when running the Lambda
   * function. You can specify one or both values to override the default values. We
   * recommend that you avoid running as root unless absolutely necessary to minimize
   * the risk of unintended changes or malicious attacks. To run as root, you must
   * set ''IsolationMode'' to ''NoContainer'' and update config.json in
   * ''greengrass-root/config'' to set ''allowFunctionsToRunAsRoot'' to
   * ''yes''.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/FunctionRunAsConfig">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API FunctionRunAsConfig
  {
  public:
    FunctionRunAsConfig();
    FunctionRunAsConfig(Aws::Utils::Json::JsonView jsonValue);
    FunctionRunAsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The group ID whose permissions are used to run a Lambda function.
     */
    inline int GetGid() const{ return m_gid; }

    /**
     * The group ID whose permissions are used to run a Lambda function.
     */
    inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }

    /**
     * The group ID whose permissions are used to run a Lambda function.
     */
    inline void SetGid(int value) { m_gidHasBeenSet = true; m_gid = value; }

    /**
     * The group ID whose permissions are used to run a Lambda function.
     */
    inline FunctionRunAsConfig& WithGid(int value) { SetGid(value); return *this;}


    /**
     * The user ID whose permissions are used to run a Lambda function.
     */
    inline int GetUid() const{ return m_uid; }

    /**
     * The user ID whose permissions are used to run a Lambda function.
     */
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }

    /**
     * The user ID whose permissions are used to run a Lambda function.
     */
    inline void SetUid(int value) { m_uidHasBeenSet = true; m_uid = value; }

    /**
     * The user ID whose permissions are used to run a Lambda function.
     */
    inline FunctionRunAsConfig& WithUid(int value) { SetUid(value); return *this;}

  private:

    int m_gid;
    bool m_gidHasBeenSet;

    int m_uid;
    bool m_uidHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
