/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/SOAChange.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>Updated DNS properties for the private DNS namespace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PrivateDnsPropertiesMutableChange">AWS
   * API Reference</a></p>
   */
  class PrivateDnsPropertiesMutableChange
  {
  public:
    AWS_SERVICEDISCOVERY_API PrivateDnsPropertiesMutableChange();
    AWS_SERVICEDISCOVERY_API PrivateDnsPropertiesMutableChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API PrivateDnsPropertiesMutableChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Updated fields for the Start of Authority (SOA) record for the hosted zone
     * for the private DNS namespace.</p>
     */
    inline const SOAChange& GetSOA() const{ return m_sOA; }

    /**
     * <p>Updated fields for the Start of Authority (SOA) record for the hosted zone
     * for the private DNS namespace.</p>
     */
    inline bool SOAHasBeenSet() const { return m_sOAHasBeenSet; }

    /**
     * <p>Updated fields for the Start of Authority (SOA) record for the hosted zone
     * for the private DNS namespace.</p>
     */
    inline void SetSOA(const SOAChange& value) { m_sOAHasBeenSet = true; m_sOA = value; }

    /**
     * <p>Updated fields for the Start of Authority (SOA) record for the hosted zone
     * for the private DNS namespace.</p>
     */
    inline void SetSOA(SOAChange&& value) { m_sOAHasBeenSet = true; m_sOA = std::move(value); }

    /**
     * <p>Updated fields for the Start of Authority (SOA) record for the hosted zone
     * for the private DNS namespace.</p>
     */
    inline PrivateDnsPropertiesMutableChange& WithSOA(const SOAChange& value) { SetSOA(value); return *this;}

    /**
     * <p>Updated fields for the Start of Authority (SOA) record for the hosted zone
     * for the private DNS namespace.</p>
     */
    inline PrivateDnsPropertiesMutableChange& WithSOA(SOAChange&& value) { SetSOA(std::move(value)); return *this;}

  private:

    SOAChange m_sOA;
    bool m_sOAHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
