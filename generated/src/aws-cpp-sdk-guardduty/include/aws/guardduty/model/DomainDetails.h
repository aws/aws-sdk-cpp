/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DomainDetails">AWS
   * API Reference</a></p>
   */
  class DomainDetails
  {
  public:
    AWS_GUARDDUTY_API DomainDetails();
    AWS_GUARDDUTY_API DomainDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DomainDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The domain information for the Amazon Web Services API call.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain information for the Amazon Web Services API call.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain information for the Amazon Web Services API call.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain information for the Amazon Web Services API call.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain information for the Amazon Web Services API call.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain information for the Amazon Web Services API call.</p>
     */
    inline DomainDetails& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain information for the Amazon Web Services API call.</p>
     */
    inline DomainDetails& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain information for the Amazon Web Services API call.</p>
     */
    inline DomainDetails& WithDomain(const char* value) { SetDomain(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
