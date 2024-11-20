/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/DomainUnitTarget.h>
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
   * <p>The target of the rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RuleTarget">AWS
   * API Reference</a></p>
   */
  class RuleTarget
  {
  public:
    AWS_DATAZONE_API RuleTarget();
    AWS_DATAZONE_API RuleTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RuleTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the domain unit.</p>
     */
    inline const DomainUnitTarget& GetDomainUnitTarget() const{ return m_domainUnitTarget; }
    inline bool DomainUnitTargetHasBeenSet() const { return m_domainUnitTargetHasBeenSet; }
    inline void SetDomainUnitTarget(const DomainUnitTarget& value) { m_domainUnitTargetHasBeenSet = true; m_domainUnitTarget = value; }
    inline void SetDomainUnitTarget(DomainUnitTarget&& value) { m_domainUnitTargetHasBeenSet = true; m_domainUnitTarget = std::move(value); }
    inline RuleTarget& WithDomainUnitTarget(const DomainUnitTarget& value) { SetDomainUnitTarget(value); return *this;}
    inline RuleTarget& WithDomainUnitTarget(DomainUnitTarget&& value) { SetDomainUnitTarget(std::move(value)); return *this;}
    ///@}
  private:

    DomainUnitTarget m_domainUnitTarget;
    bool m_domainUnitTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
