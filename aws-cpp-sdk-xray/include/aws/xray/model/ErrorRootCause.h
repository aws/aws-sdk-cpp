/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/ErrorRootCauseService.h>
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
   * <p>The root cause of a trace summary error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ErrorRootCause">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API ErrorRootCause
  {
  public:
    ErrorRootCause();
    ErrorRootCause(Aws::Utils::Json::JsonView jsonValue);
    ErrorRootCause& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of services corresponding to an error. A service identifies a segment
     * and it contains a name, account ID, type, and inferred flag.</p>
     */
    inline const Aws::Vector<ErrorRootCauseService>& GetServices() const{ return m_services; }

    /**
     * <p>A list of services corresponding to an error. A service identifies a segment
     * and it contains a name, account ID, type, and inferred flag.</p>
     */
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }

    /**
     * <p>A list of services corresponding to an error. A service identifies a segment
     * and it contains a name, account ID, type, and inferred flag.</p>
     */
    inline void SetServices(const Aws::Vector<ErrorRootCauseService>& value) { m_servicesHasBeenSet = true; m_services = value; }

    /**
     * <p>A list of services corresponding to an error. A service identifies a segment
     * and it contains a name, account ID, type, and inferred flag.</p>
     */
    inline void SetServices(Aws::Vector<ErrorRootCauseService>&& value) { m_servicesHasBeenSet = true; m_services = std::move(value); }

    /**
     * <p>A list of services corresponding to an error. A service identifies a segment
     * and it contains a name, account ID, type, and inferred flag.</p>
     */
    inline ErrorRootCause& WithServices(const Aws::Vector<ErrorRootCauseService>& value) { SetServices(value); return *this;}

    /**
     * <p>A list of services corresponding to an error. A service identifies a segment
     * and it contains a name, account ID, type, and inferred flag.</p>
     */
    inline ErrorRootCause& WithServices(Aws::Vector<ErrorRootCauseService>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>A list of services corresponding to an error. A service identifies a segment
     * and it contains a name, account ID, type, and inferred flag.</p>
     */
    inline ErrorRootCause& AddServices(const ErrorRootCauseService& value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }

    /**
     * <p>A list of services corresponding to an error. A service identifies a segment
     * and it contains a name, account ID, type, and inferred flag.</p>
     */
    inline ErrorRootCause& AddServices(ErrorRootCauseService&& value) { m_servicesHasBeenSet = true; m_services.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ErrorRootCauseService> m_services;
    bool m_servicesHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
