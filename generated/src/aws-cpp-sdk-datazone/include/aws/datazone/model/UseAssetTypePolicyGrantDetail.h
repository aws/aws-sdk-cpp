/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>Specifies the domain unit(s) whose projects can use this asset type while
   * creating asset or asset revisions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UseAssetTypePolicyGrantDetail">AWS
   * API Reference</a></p>
   */
  class UseAssetTypePolicyGrantDetail
  {
  public:
    AWS_DATAZONE_API UseAssetTypePolicyGrantDetail() = default;
    AWS_DATAZONE_API UseAssetTypePolicyGrantDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API UseAssetTypePolicyGrantDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the domain unit.</p>
     */
    inline const Aws::String& GetDomainUnitId() const { return m_domainUnitId; }
    inline bool DomainUnitIdHasBeenSet() const { return m_domainUnitIdHasBeenSet; }
    template<typename DomainUnitIdT = Aws::String>
    void SetDomainUnitId(DomainUnitIdT&& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = std::forward<DomainUnitIdT>(value); }
    template<typename DomainUnitIdT = Aws::String>
    UseAssetTypePolicyGrantDetail& WithDomainUnitId(DomainUnitIdT&& value) { SetDomainUnitId(std::forward<DomainUnitIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainUnitId;
    bool m_domainUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
