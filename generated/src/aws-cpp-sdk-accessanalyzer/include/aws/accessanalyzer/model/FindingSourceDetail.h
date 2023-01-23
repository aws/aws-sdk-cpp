/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Includes details about how the access that generated the finding is granted.
   * This is populated for Amazon S3 bucket findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/FindingSourceDetail">AWS
   * API Reference</a></p>
   */
  class FindingSourceDetail
  {
  public:
    AWS_ACCESSANALYZER_API FindingSourceDetail();
    AWS_ACCESSANALYZER_API FindingSourceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API FindingSourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the access point that generated the finding. The ARN format
     * depends on whether the ARN represents an access point or a multi-region access
     * point.</p>
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }

    /**
     * <p>The ARN of the access point that generated the finding. The ARN format
     * depends on whether the ARN represents an access point or a multi-region access
     * point.</p>
     */
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }

    /**
     * <p>The ARN of the access point that generated the finding. The ARN format
     * depends on whether the ARN represents an access point or a multi-region access
     * point.</p>
     */
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = value; }

    /**
     * <p>The ARN of the access point that generated the finding. The ARN format
     * depends on whether the ARN represents an access point or a multi-region access
     * point.</p>
     */
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::move(value); }

    /**
     * <p>The ARN of the access point that generated the finding. The ARN format
     * depends on whether the ARN represents an access point or a multi-region access
     * point.</p>
     */
    inline void SetAccessPointArn(const char* value) { m_accessPointArnHasBeenSet = true; m_accessPointArn.assign(value); }

    /**
     * <p>The ARN of the access point that generated the finding. The ARN format
     * depends on whether the ARN represents an access point or a multi-region access
     * point.</p>
     */
    inline FindingSourceDetail& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}

    /**
     * <p>The ARN of the access point that generated the finding. The ARN format
     * depends on whether the ARN represents an access point or a multi-region access
     * point.</p>
     */
    inline FindingSourceDetail& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the access point that generated the finding. The ARN format
     * depends on whether the ARN represents an access point or a multi-region access
     * point.</p>
     */
    inline FindingSourceDetail& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}


    /**
     * <p>The account of the cross-account access point that generated the finding.</p>
     */
    inline const Aws::String& GetAccessPointAccount() const{ return m_accessPointAccount; }

    /**
     * <p>The account of the cross-account access point that generated the finding.</p>
     */
    inline bool AccessPointAccountHasBeenSet() const { return m_accessPointAccountHasBeenSet; }

    /**
     * <p>The account of the cross-account access point that generated the finding.</p>
     */
    inline void SetAccessPointAccount(const Aws::String& value) { m_accessPointAccountHasBeenSet = true; m_accessPointAccount = value; }

    /**
     * <p>The account of the cross-account access point that generated the finding.</p>
     */
    inline void SetAccessPointAccount(Aws::String&& value) { m_accessPointAccountHasBeenSet = true; m_accessPointAccount = std::move(value); }

    /**
     * <p>The account of the cross-account access point that generated the finding.</p>
     */
    inline void SetAccessPointAccount(const char* value) { m_accessPointAccountHasBeenSet = true; m_accessPointAccount.assign(value); }

    /**
     * <p>The account of the cross-account access point that generated the finding.</p>
     */
    inline FindingSourceDetail& WithAccessPointAccount(const Aws::String& value) { SetAccessPointAccount(value); return *this;}

    /**
     * <p>The account of the cross-account access point that generated the finding.</p>
     */
    inline FindingSourceDetail& WithAccessPointAccount(Aws::String&& value) { SetAccessPointAccount(std::move(value)); return *this;}

    /**
     * <p>The account of the cross-account access point that generated the finding.</p>
     */
    inline FindingSourceDetail& WithAccessPointAccount(const char* value) { SetAccessPointAccount(value); return *this;}

  private:

    Aws::String m_accessPointArn;
    bool m_accessPointArnHasBeenSet = false;

    Aws::String m_accessPointAccount;
    bool m_accessPointAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
