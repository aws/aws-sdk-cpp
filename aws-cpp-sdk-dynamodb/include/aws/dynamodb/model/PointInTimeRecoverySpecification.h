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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the settings used to enable point in time recovery.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/PointInTimeRecoverySpecification">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API PointInTimeRecoverySpecification
  {
  public:
    PointInTimeRecoverySpecification();
    PointInTimeRecoverySpecification(Aws::Utils::Json::JsonView jsonValue);
    PointInTimeRecoverySpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether point in time recovery is enabled (true) or disabled
     * (false) on the table.</p>
     */
    inline bool GetPointInTimeRecoveryEnabled() const{ return m_pointInTimeRecoveryEnabled; }

    /**
     * <p>Indicates whether point in time recovery is enabled (true) or disabled
     * (false) on the table.</p>
     */
    inline bool PointInTimeRecoveryEnabledHasBeenSet() const { return m_pointInTimeRecoveryEnabledHasBeenSet; }

    /**
     * <p>Indicates whether point in time recovery is enabled (true) or disabled
     * (false) on the table.</p>
     */
    inline void SetPointInTimeRecoveryEnabled(bool value) { m_pointInTimeRecoveryEnabledHasBeenSet = true; m_pointInTimeRecoveryEnabled = value; }

    /**
     * <p>Indicates whether point in time recovery is enabled (true) or disabled
     * (false) on the table.</p>
     */
    inline PointInTimeRecoverySpecification& WithPointInTimeRecoveryEnabled(bool value) { SetPointInTimeRecoveryEnabled(value); return *this;}

  private:

    bool m_pointInTimeRecoveryEnabled;
    bool m_pointInTimeRecoveryEnabledHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
