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
    AWS_INSPECTOR2_API CisCheckAggregation();
    AWS_INSPECTOR2_API CisCheckAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisCheckAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID for the CIS check.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline CisCheckAggregation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline CisCheckAggregation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline CisCheckAggregation& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the CIS check.</p>
     */
    inline const Aws::String& GetCheckDescription() const{ return m_checkDescription; }
    inline bool CheckDescriptionHasBeenSet() const { return m_checkDescriptionHasBeenSet; }
    inline void SetCheckDescription(const Aws::String& value) { m_checkDescriptionHasBeenSet = true; m_checkDescription = value; }
    inline void SetCheckDescription(Aws::String&& value) { m_checkDescriptionHasBeenSet = true; m_checkDescription = std::move(value); }
    inline void SetCheckDescription(const char* value) { m_checkDescriptionHasBeenSet = true; m_checkDescription.assign(value); }
    inline CisCheckAggregation& WithCheckDescription(const Aws::String& value) { SetCheckDescription(value); return *this;}
    inline CisCheckAggregation& WithCheckDescription(Aws::String&& value) { SetCheckDescription(std::move(value)); return *this;}
    inline CisCheckAggregation& WithCheckDescription(const char* value) { SetCheckDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The check ID for the CIS check.</p>
     */
    inline const Aws::String& GetCheckId() const{ return m_checkId; }
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }
    inline void SetCheckId(const Aws::String& value) { m_checkIdHasBeenSet = true; m_checkId = value; }
    inline void SetCheckId(Aws::String&& value) { m_checkIdHasBeenSet = true; m_checkId = std::move(value); }
    inline void SetCheckId(const char* value) { m_checkIdHasBeenSet = true; m_checkId.assign(value); }
    inline CisCheckAggregation& WithCheckId(const Aws::String& value) { SetCheckId(value); return *this;}
    inline CisCheckAggregation& WithCheckId(Aws::String&& value) { SetCheckId(std::move(value)); return *this;}
    inline CisCheckAggregation& WithCheckId(const char* value) { SetCheckId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS check level.</p>
     */
    inline const CisSecurityLevel& GetLevel() const{ return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(const CisSecurityLevel& value) { m_levelHasBeenSet = true; m_level = value; }
    inline void SetLevel(CisSecurityLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }
    inline CisCheckAggregation& WithLevel(const CisSecurityLevel& value) { SetLevel(value); return *this;}
    inline CisCheckAggregation& WithLevel(CisSecurityLevel&& value) { SetLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS check platform.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline CisCheckAggregation& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline CisCheckAggregation& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline CisCheckAggregation& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan ARN for the CIS check scan ARN.</p>
     */
    inline const Aws::String& GetScanArn() const{ return m_scanArn; }
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }
    inline void SetScanArn(const Aws::String& value) { m_scanArnHasBeenSet = true; m_scanArn = value; }
    inline void SetScanArn(Aws::String&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::move(value); }
    inline void SetScanArn(const char* value) { m_scanArnHasBeenSet = true; m_scanArn.assign(value); }
    inline CisCheckAggregation& WithScanArn(const Aws::String& value) { SetScanArn(value); return *this;}
    inline CisCheckAggregation& WithScanArn(Aws::String&& value) { SetScanArn(std::move(value)); return *this;}
    inline CisCheckAggregation& WithScanArn(const char* value) { SetScanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS check status counts.</p>
     */
    inline const StatusCounts& GetStatusCounts() const{ return m_statusCounts; }
    inline bool StatusCountsHasBeenSet() const { return m_statusCountsHasBeenSet; }
    inline void SetStatusCounts(const StatusCounts& value) { m_statusCountsHasBeenSet = true; m_statusCounts = value; }
    inline void SetStatusCounts(StatusCounts&& value) { m_statusCountsHasBeenSet = true; m_statusCounts = std::move(value); }
    inline CisCheckAggregation& WithStatusCounts(const StatusCounts& value) { SetStatusCounts(value); return *this;}
    inline CisCheckAggregation& WithStatusCounts(StatusCounts&& value) { SetStatusCounts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS check title.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline CisCheckAggregation& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline CisCheckAggregation& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline CisCheckAggregation& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_checkDescription;
    bool m_checkDescriptionHasBeenSet = false;

    Aws::String m_checkId;
    bool m_checkIdHasBeenSet = false;

    CisSecurityLevel m_level;
    bool m_levelHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    StatusCounts m_statusCounts;
    bool m_statusCountsHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
