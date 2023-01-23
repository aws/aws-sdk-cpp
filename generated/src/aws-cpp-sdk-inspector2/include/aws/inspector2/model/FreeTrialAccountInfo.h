/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/FreeTrialInfo.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Information about the Amazon Inspector free trial for an
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FreeTrialAccountInfo">AWS
   * API Reference</a></p>
   */
  class FreeTrialAccountInfo
  {
  public:
    AWS_INSPECTOR2_API FreeTrialAccountInfo();
    AWS_INSPECTOR2_API FreeTrialAccountInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FreeTrialAccountInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account associated with the Amazon Inspector free trial information.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account associated with the Amazon Inspector free trial information.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account associated with the Amazon Inspector free trial information.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account associated with the Amazon Inspector free trial information.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account associated with the Amazon Inspector free trial information.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account associated with the Amazon Inspector free trial information.</p>
     */
    inline FreeTrialAccountInfo& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account associated with the Amazon Inspector free trial information.</p>
     */
    inline FreeTrialAccountInfo& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account associated with the Amazon Inspector free trial information.</p>
     */
    inline FreeTrialAccountInfo& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Contains information about the Amazon Inspector free trial for an
     * account.</p>
     */
    inline const Aws::Vector<FreeTrialInfo>& GetFreeTrialInfo() const{ return m_freeTrialInfo; }

    /**
     * <p>Contains information about the Amazon Inspector free trial for an
     * account.</p>
     */
    inline bool FreeTrialInfoHasBeenSet() const { return m_freeTrialInfoHasBeenSet; }

    /**
     * <p>Contains information about the Amazon Inspector free trial for an
     * account.</p>
     */
    inline void SetFreeTrialInfo(const Aws::Vector<FreeTrialInfo>& value) { m_freeTrialInfoHasBeenSet = true; m_freeTrialInfo = value; }

    /**
     * <p>Contains information about the Amazon Inspector free trial for an
     * account.</p>
     */
    inline void SetFreeTrialInfo(Aws::Vector<FreeTrialInfo>&& value) { m_freeTrialInfoHasBeenSet = true; m_freeTrialInfo = std::move(value); }

    /**
     * <p>Contains information about the Amazon Inspector free trial for an
     * account.</p>
     */
    inline FreeTrialAccountInfo& WithFreeTrialInfo(const Aws::Vector<FreeTrialInfo>& value) { SetFreeTrialInfo(value); return *this;}

    /**
     * <p>Contains information about the Amazon Inspector free trial for an
     * account.</p>
     */
    inline FreeTrialAccountInfo& WithFreeTrialInfo(Aws::Vector<FreeTrialInfo>&& value) { SetFreeTrialInfo(std::move(value)); return *this;}

    /**
     * <p>Contains information about the Amazon Inspector free trial for an
     * account.</p>
     */
    inline FreeTrialAccountInfo& AddFreeTrialInfo(const FreeTrialInfo& value) { m_freeTrialInfoHasBeenSet = true; m_freeTrialInfo.push_back(value); return *this; }

    /**
     * <p>Contains information about the Amazon Inspector free trial for an
     * account.</p>
     */
    inline FreeTrialAccountInfo& AddFreeTrialInfo(FreeTrialInfo&& value) { m_freeTrialInfoHasBeenSet = true; m_freeTrialInfo.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<FreeTrialInfo> m_freeTrialInfo;
    bool m_freeTrialInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
