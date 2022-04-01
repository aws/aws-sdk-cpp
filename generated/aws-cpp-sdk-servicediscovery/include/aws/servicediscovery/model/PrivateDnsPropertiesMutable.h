﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/SOA.h>
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
   * <p>DNS properties for the private DNS namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PrivateDnsPropertiesMutable">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API PrivateDnsPropertiesMutable
  {
  public:
    PrivateDnsPropertiesMutable();
    PrivateDnsPropertiesMutable(Aws::Utils::Json::JsonView jsonValue);
    PrivateDnsPropertiesMutable& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Fields for the Start of Authority (SOA) record for the hosted zone for the
     * private DNS namespace.</p>
     */
    inline const SOA& GetSOA() const{ return m_sOA; }

    /**
     * <p>Fields for the Start of Authority (SOA) record for the hosted zone for the
     * private DNS namespace.</p>
     */
    inline bool SOAHasBeenSet() const { return m_sOAHasBeenSet; }

    /**
     * <p>Fields for the Start of Authority (SOA) record for the hosted zone for the
     * private DNS namespace.</p>
     */
    inline void SetSOA(const SOA& value) { m_sOAHasBeenSet = true; m_sOA = value; }

    /**
     * <p>Fields for the Start of Authority (SOA) record for the hosted zone for the
     * private DNS namespace.</p>
     */
    inline void SetSOA(SOA&& value) { m_sOAHasBeenSet = true; m_sOA = std::move(value); }

    /**
     * <p>Fields for the Start of Authority (SOA) record for the hosted zone for the
     * private DNS namespace.</p>
     */
    inline PrivateDnsPropertiesMutable& WithSOA(const SOA& value) { SetSOA(value); return *this;}

    /**
     * <p>Fields for the Start of Authority (SOA) record for the hosted zone for the
     * private DNS namespace.</p>
     */
    inline PrivateDnsPropertiesMutable& WithSOA(SOA&& value) { SetSOA(std::move(value)); return *this;}

  private:

    SOA m_sOA;
    bool m_sOAHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
