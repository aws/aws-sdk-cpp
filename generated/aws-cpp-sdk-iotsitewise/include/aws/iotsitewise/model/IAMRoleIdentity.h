﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains information about an Identity and Access Management role. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
   * roles</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/IAMRoleIdentity">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API IAMRoleIdentity
  {
  public:
    IAMRoleIdentity();
    IAMRoleIdentity(Aws::Utils::Json::JsonView jsonValue);
    IAMRoleIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>
     */
    inline IAMRoleIdentity& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>
     */
    inline IAMRoleIdentity& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * ARNs</a> in the <i>IAM User Guide</i>.</p>
     */
    inline IAMRoleIdentity& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
