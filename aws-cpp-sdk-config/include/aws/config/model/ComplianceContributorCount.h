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
#include <aws/config/ConfigService_EXPORTS.h>

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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The number of AWS resources or AWS Config rules responsible for the current
   * compliance of the item, up to a maximum number.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ComplianceContributorCount">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ComplianceContributorCount
  {
  public:
    ComplianceContributorCount();
    ComplianceContributorCount(Aws::Utils::Json::JsonView jsonValue);
    ComplianceContributorCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of AWS resources or AWS Config rules responsible for the current
     * compliance of the item.</p>
     */
    inline int GetCappedCount() const{ return m_cappedCount; }

    /**
     * <p>The number of AWS resources or AWS Config rules responsible for the current
     * compliance of the item.</p>
     */
    inline bool CappedCountHasBeenSet() const { return m_cappedCountHasBeenSet; }

    /**
     * <p>The number of AWS resources or AWS Config rules responsible for the current
     * compliance of the item.</p>
     */
    inline void SetCappedCount(int value) { m_cappedCountHasBeenSet = true; m_cappedCount = value; }

    /**
     * <p>The number of AWS resources or AWS Config rules responsible for the current
     * compliance of the item.</p>
     */
    inline ComplianceContributorCount& WithCappedCount(int value) { SetCappedCount(value); return *this;}


    /**
     * <p>Indicates whether the maximum count is reached.</p>
     */
    inline bool GetCapExceeded() const{ return m_capExceeded; }

    /**
     * <p>Indicates whether the maximum count is reached.</p>
     */
    inline bool CapExceededHasBeenSet() const { return m_capExceededHasBeenSet; }

    /**
     * <p>Indicates whether the maximum count is reached.</p>
     */
    inline void SetCapExceeded(bool value) { m_capExceededHasBeenSet = true; m_capExceeded = value; }

    /**
     * <p>Indicates whether the maximum count is reached.</p>
     */
    inline ComplianceContributorCount& WithCapExceeded(bool value) { SetCapExceeded(value); return *this;}

  private:

    int m_cappedCount;
    bool m_cappedCountHasBeenSet;

    bool m_capExceeded;
    bool m_capExceededHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
