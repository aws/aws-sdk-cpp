/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisSecurityLevel.h>
#include <aws/inspector2/model/StatusCounts.h>
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
   * <p>A CIS check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisCheckAggregation">AWS
   * API Reference</a></p>
   */
  class CisCheckAggregation
  {
  public:
    AWS_INSPECTOR2_API CisCheckAggregation() = default;
    AWS_INSPECTOR2_API CisCheckAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisCheckAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scan ARN for the CIS check scan ARN.</p>
     */
    inline const Aws::String& GetScanArn() const { return m_scanArn; }
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }
    template<typename ScanArnT = Aws::String>
    void SetScanArn(ScanArnT&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::forward<ScanArnT>(value); }
    template<typename ScanArnT = Aws::String>
    CisCheckAggregation& WithScanArn(ScanArnT&& value) { SetScanArn(std::forward<ScanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The check ID for the CIS check.</p>
     */
    inline const Aws::String& GetCheckId() const { return m_checkId; }
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }
    template<typename CheckIdT = Aws::String>
    void SetCheckId(CheckIdT&& value) { m_checkIdHasBeenSet = true; m_checkId = std::forward<CheckIdT>(value); }
    template<typename CheckIdT = Aws::String>
    CisCheckAggregation& WithCheckId(CheckIdT&& value) { SetCheckId(std::forward<CheckIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS check title.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    CisCheckAggregation& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the CIS check.</p>
     */
    inline const Aws::String& GetCheckDescription() const { return m_checkDescription; }
    inline bool CheckDescriptionHasBeenSet() const { return m_checkDescriptionHasBeenSet; }
    template<typename CheckDescriptionT = Aws::String>
    void SetCheckDescription(CheckDescriptionT&& value) { m_checkDescriptionHasBeenSet = true; m_checkDescription = std::forward<CheckDescriptionT>(value); }
    template<typename CheckDescriptionT = Aws::String>
    CisCheckAggregation& WithCheckDescription(CheckDescriptionT&& value) { SetCheckDescription(std::forward<CheckDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS check level.</p>
     */
    inline CisSecurityLevel GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(CisSecurityLevel value) { m_levelHasBeenSet = true; m_level = value; }
    inline CisCheckAggregation& WithLevel(CisSecurityLevel value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID for the CIS check.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CisCheckAggregation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS check status counts.</p>
     */
    inline const StatusCounts& GetStatusCounts() const { return m_statusCounts; }
    inline bool StatusCountsHasBeenSet() const { return m_statusCountsHasBeenSet; }
    template<typename StatusCountsT = StatusCounts>
    void SetStatusCounts(StatusCountsT&& value) { m_statusCountsHasBeenSet = true; m_statusCounts = std::forward<StatusCountsT>(value); }
    template<typename StatusCountsT = StatusCounts>
    CisCheckAggregation& WithStatusCounts(StatusCountsT&& value) { SetStatusCounts(std::forward<StatusCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS check platform.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    CisCheckAggregation& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    Aws::String m_checkId;
    bool m_checkIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_checkDescription;
    bool m_checkDescriptionHasBeenSet = false;

    CisSecurityLevel m_level{CisSecurityLevel::NOT_SET};
    bool m_levelHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    StatusCounts m_statusCounts;
    bool m_statusCountsHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
