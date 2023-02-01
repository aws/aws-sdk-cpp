/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The number of Amazon Web Services resources or Config rules responsible for
   * the current compliance of the item, up to a maximum number.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ComplianceContributorCount">AWS
   * API Reference</a></p>
   */
  class ComplianceContributorCount
  {
  public:
    AWS_CONFIGSERVICE_API ComplianceContributorCount();
    AWS_CONFIGSERVICE_API ComplianceContributorCount(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ComplianceContributorCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of Amazon Web Services resources or Config rules responsible for
     * the current compliance of the item.</p>
     */
    inline int GetCappedCount() const{ return m_cappedCount; }

    /**
     * <p>The number of Amazon Web Services resources or Config rules responsible for
     * the current compliance of the item.</p>
     */
    inline bool CappedCountHasBeenSet() const { return m_cappedCountHasBeenSet; }

    /**
     * <p>The number of Amazon Web Services resources or Config rules responsible for
     * the current compliance of the item.</p>
     */
    inline void SetCappedCount(int value) { m_cappedCountHasBeenSet = true; m_cappedCount = value; }

    /**
     * <p>The number of Amazon Web Services resources or Config rules responsible for
     * the current compliance of the item.</p>
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
    bool m_cappedCountHasBeenSet = false;

    bool m_capExceeded;
    bool m_capExceededHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
