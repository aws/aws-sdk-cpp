/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p> The combination of AWS service, linked account, Region, and usage type where
   * a cost anomaly is observed. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RootCause">AWS API
   * Reference</a></p>
   */
  class AWS_COSTEXPLORER_API RootCause
  {
  public:
    RootCause();
    RootCause(Aws::Utils::Json::JsonView jsonValue);
    RootCause& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The AWS service name associated with the cost anomaly. </p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p> The AWS service name associated with the cost anomaly. </p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p> The AWS service name associated with the cost anomaly. </p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p> The AWS service name associated with the cost anomaly. </p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p> The AWS service name associated with the cost anomaly. </p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p> The AWS service name associated with the cost anomaly. </p>
     */
    inline RootCause& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p> The AWS service name associated with the cost anomaly. </p>
     */
    inline RootCause& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p> The AWS service name associated with the cost anomaly. </p>
     */
    inline RootCause& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p> The AWS Region associated with the cost anomaly. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p> The AWS Region associated with the cost anomaly. </p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p> The AWS Region associated with the cost anomaly. </p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p> The AWS Region associated with the cost anomaly. </p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p> The AWS Region associated with the cost anomaly. </p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p> The AWS Region associated with the cost anomaly. </p>
     */
    inline RootCause& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p> The AWS Region associated with the cost anomaly. </p>
     */
    inline RootCause& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p> The AWS Region associated with the cost anomaly. </p>
     */
    inline RootCause& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p> The linked account value associated with the cost anomaly. </p>
     */
    inline const Aws::String& GetLinkedAccount() const{ return m_linkedAccount; }

    /**
     * <p> The linked account value associated with the cost anomaly. </p>
     */
    inline bool LinkedAccountHasBeenSet() const { return m_linkedAccountHasBeenSet; }

    /**
     * <p> The linked account value associated with the cost anomaly. </p>
     */
    inline void SetLinkedAccount(const Aws::String& value) { m_linkedAccountHasBeenSet = true; m_linkedAccount = value; }

    /**
     * <p> The linked account value associated with the cost anomaly. </p>
     */
    inline void SetLinkedAccount(Aws::String&& value) { m_linkedAccountHasBeenSet = true; m_linkedAccount = std::move(value); }

    /**
     * <p> The linked account value associated with the cost anomaly. </p>
     */
    inline void SetLinkedAccount(const char* value) { m_linkedAccountHasBeenSet = true; m_linkedAccount.assign(value); }

    /**
     * <p> The linked account value associated with the cost anomaly. </p>
     */
    inline RootCause& WithLinkedAccount(const Aws::String& value) { SetLinkedAccount(value); return *this;}

    /**
     * <p> The linked account value associated with the cost anomaly. </p>
     */
    inline RootCause& WithLinkedAccount(Aws::String&& value) { SetLinkedAccount(std::move(value)); return *this;}

    /**
     * <p> The linked account value associated with the cost anomaly. </p>
     */
    inline RootCause& WithLinkedAccount(const char* value) { SetLinkedAccount(value); return *this;}


    /**
     * <p> The <code>UsageType</code> value associated with the cost anomaly. </p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }

    /**
     * <p> The <code>UsageType</code> value associated with the cost anomaly. </p>
     */
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }

    /**
     * <p> The <code>UsageType</code> value associated with the cost anomaly. </p>
     */
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }

    /**
     * <p> The <code>UsageType</code> value associated with the cost anomaly. </p>
     */
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }

    /**
     * <p> The <code>UsageType</code> value associated with the cost anomaly. </p>
     */
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }

    /**
     * <p> The <code>UsageType</code> value associated with the cost anomaly. </p>
     */
    inline RootCause& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}

    /**
     * <p> The <code>UsageType</code> value associated with the cost anomaly. </p>
     */
    inline RootCause& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}

    /**
     * <p> The <code>UsageType</code> value associated with the cost anomaly. </p>
     */
    inline RootCause& WithUsageType(const char* value) { SetUsageType(value); return *this;}

  private:

    Aws::String m_service;
    bool m_serviceHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_linkedAccount;
    bool m_linkedAccountHasBeenSet;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
