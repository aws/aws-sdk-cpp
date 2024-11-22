/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/RootCauseImpact.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The combination of Amazon Web Services service, linked account, linked
   * account name, Region, and usage type where a cost anomaly is observed, along
   * with the dollar and percentage amount of the anomaly impact. The linked account
   * name will only be available when the account name can be
   * identified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RootCause">AWS API
   * Reference</a></p>
   */
  class RootCause
  {
  public:
    AWS_COSTEXPLORER_API RootCause();
    AWS_COSTEXPLORER_API RootCause(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RootCause& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services service name that's associated with the cost anomaly.
     * </p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline RootCause& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline RootCause& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline RootCause& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that's associated with the cost anomaly. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline RootCause& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline RootCause& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline RootCause& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member account value that's associated with the cost anomaly. </p>
     */
    inline const Aws::String& GetLinkedAccount() const{ return m_linkedAccount; }
    inline bool LinkedAccountHasBeenSet() const { return m_linkedAccountHasBeenSet; }
    inline void SetLinkedAccount(const Aws::String& value) { m_linkedAccountHasBeenSet = true; m_linkedAccount = value; }
    inline void SetLinkedAccount(Aws::String&& value) { m_linkedAccountHasBeenSet = true; m_linkedAccount = std::move(value); }
    inline void SetLinkedAccount(const char* value) { m_linkedAccountHasBeenSet = true; m_linkedAccount.assign(value); }
    inline RootCause& WithLinkedAccount(const Aws::String& value) { SetLinkedAccount(value); return *this;}
    inline RootCause& WithLinkedAccount(Aws::String&& value) { SetLinkedAccount(std::move(value)); return *this;}
    inline RootCause& WithLinkedAccount(const char* value) { SetLinkedAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member account name value that's associated with the cost anomaly.</p>
     */
    inline const Aws::String& GetLinkedAccountName() const{ return m_linkedAccountName; }
    inline bool LinkedAccountNameHasBeenSet() const { return m_linkedAccountNameHasBeenSet; }
    inline void SetLinkedAccountName(const Aws::String& value) { m_linkedAccountNameHasBeenSet = true; m_linkedAccountName = value; }
    inline void SetLinkedAccountName(Aws::String&& value) { m_linkedAccountNameHasBeenSet = true; m_linkedAccountName = std::move(value); }
    inline void SetLinkedAccountName(const char* value) { m_linkedAccountNameHasBeenSet = true; m_linkedAccountName.assign(value); }
    inline RootCause& WithLinkedAccountName(const Aws::String& value) { SetLinkedAccountName(value); return *this;}
    inline RootCause& WithLinkedAccountName(Aws::String&& value) { SetLinkedAccountName(std::move(value)); return *this;}
    inline RootCause& WithLinkedAccountName(const char* value) { SetLinkedAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>UsageType</code> value that's associated with the cost anomaly.
     * </p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }
    inline RootCause& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}
    inline RootCause& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}
    inline RootCause& WithUsageType(const char* value) { SetUsageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dollar impact for the root cause.</p>
     */
    inline const RootCauseImpact& GetImpact() const{ return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    inline void SetImpact(const RootCauseImpact& value) { m_impactHasBeenSet = true; m_impact = value; }
    inline void SetImpact(RootCauseImpact&& value) { m_impactHasBeenSet = true; m_impact = std::move(value); }
    inline RootCause& WithImpact(const RootCauseImpact& value) { SetImpact(value); return *this;}
    inline RootCause& WithImpact(RootCauseImpact&& value) { SetImpact(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_linkedAccount;
    bool m_linkedAccountHasBeenSet = false;

    Aws::String m_linkedAccountName;
    bool m_linkedAccountNameHasBeenSet = false;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    RootCauseImpact m_impact;
    bool m_impactHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
