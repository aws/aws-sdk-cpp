/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure used to include auditing information on the privileged API.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/AuditContext">AWS
   * API Reference</a></p>
   */
  class AuditContext
  {
  public:
    AWS_LAKEFORMATION_API AuditContext() = default;
    AWS_LAKEFORMATION_API AuditContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API AuditContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter engine can populate the 'AdditionalAuditContext' information with
     * the request ID for you to track. This information will be displayed in
     * CloudTrail log in your account.</p>
     */
    inline const Aws::String& GetAdditionalAuditContext() const { return m_additionalAuditContext; }
    inline bool AdditionalAuditContextHasBeenSet() const { return m_additionalAuditContextHasBeenSet; }
    template<typename AdditionalAuditContextT = Aws::String>
    void SetAdditionalAuditContext(AdditionalAuditContextT&& value) { m_additionalAuditContextHasBeenSet = true; m_additionalAuditContext = std::forward<AdditionalAuditContextT>(value); }
    template<typename AdditionalAuditContextT = Aws::String>
    AuditContext& WithAdditionalAuditContext(AdditionalAuditContextT&& value) { SetAdditionalAuditContext(std::forward<AdditionalAuditContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_additionalAuditContext;
    bool m_additionalAuditContextHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
