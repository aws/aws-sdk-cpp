﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/FaultRootCauseService.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>The root cause information for a trace summary fault.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/FaultRootCause">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API FaultRootCause
  {
  public:
    FaultRootCause();
    FaultRootCause(Aws::Utils::Json::JsonView jsonValue);
    FaultRootCause& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of corresponding services. A service identifies a segment and it
     * contains a name, account ID, type, and inferred flag.</p>
     */
    inline const Aws::Vector<FaultRootCauseService>& GetServices() const{ return m_services; }

    /**
     * <p>A list of corresponding services. A service identifies a segment and it
     * contains a name, account ID, type, and inferred flag.</p>
     */
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }

    /**
     * <p>A list of corresponding services. A service identifies a segment and it
     * contains a name, account ID, type, and inferred flag.</p>
     */
    inline void SetServices(const Aws::Vector<FaultRootCauseService>& value) { m_servicesHasBeenSet = true; m_services = value; }

    /**
     * <p>A list of corresponding services. A service identifies a segment and it
     * contains a name, account ID, type, and inferred flag.</p>
     */
    inline void SetServices(Aws::Vector<FaultRootCauseService>&& value) { m_servicesHasBeenSet = true; m_services = std::move(value); }

    /**
     * <p>A list of corresponding services. A service identifies a segment and it
     * contains a name, account ID, type, and inferred flag.</p>
     */
    inline FaultRootCause& WithServices(const Aws::Vector<FaultRootCauseService>& value) { SetServices(value); return *this;}

    /**
     * <p>A list of corresponding services. A service identifies a segment and it
     * contains a name, account ID, type, and inferred flag.</p>
     */
    inline FaultRootCause& WithServices(Aws::Vector<FaultRootCauseService>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>A list of corresponding services. A service identifies a segment and it
     * contains a name, account ID, type, and inferred flag.</p>
     */
    inline FaultRootCause& AddServices(const FaultRootCauseService& value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }

    /**
     * <p>A list of corresponding services. A service identifies a segment and it
     * contains a name, account ID, type, and inferred flag.</p>
     */
    inline FaultRootCause& AddServices(FaultRootCauseService&& value) { m_servicesHasBeenSet = true; m_services.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag that denotes that the root cause impacts the trace client.</p>
     */
    inline bool GetClientImpacting() const{ return m_clientImpacting; }

    /**
     * <p>A flag that denotes that the root cause impacts the trace client.</p>
     */
    inline bool ClientImpactingHasBeenSet() const { return m_clientImpactingHasBeenSet; }

    /**
     * <p>A flag that denotes that the root cause impacts the trace client.</p>
     */
    inline void SetClientImpacting(bool value) { m_clientImpactingHasBeenSet = true; m_clientImpacting = value; }

    /**
     * <p>A flag that denotes that the root cause impacts the trace client.</p>
     */
    inline FaultRootCause& WithClientImpacting(bool value) { SetClientImpacting(value); return *this;}

  private:

    Aws::Vector<FaultRootCauseService> m_services;
    bool m_servicesHasBeenSet;

    bool m_clientImpacting;
    bool m_clientImpactingHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
