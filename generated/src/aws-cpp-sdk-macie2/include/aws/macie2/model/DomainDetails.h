/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the domain name of the device that an entity used
   * to perform an action on an affected resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DomainDetails">AWS
   * API Reference</a></p>
   */
  class DomainDetails
  {
  public:
    AWS_MACIE2_API DomainDetails();
    AWS_MACIE2_API DomainDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API DomainDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline DomainDetails& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline DomainDetails& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline DomainDetails& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
