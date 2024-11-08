/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controlcatalog/model/ControlBehavior.h>
#include <aws/controlcatalog/model/RegionConfiguration.h>
#include <aws/controlcatalog/model/ImplementationDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/controlcatalog/model/ControlParameter.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ControlCatalog
{
namespace Model
{
  class GetControlResult
  {
  public:
    AWS_CONTROLCATALOG_API GetControlResult();
    AWS_CONTROLCATALOG_API GetControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLCATALOG_API GetControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the control.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetControlResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetControlResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetControlResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the control.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetControlResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetControlResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetControlResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of what the control does.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetControlResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetControlResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetControlResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A term that identifies the control's functional behavior. One of
     * <code>Preventive</code>, <code>Detective</code>, <code>Proactive</code> </p>
     */
    inline const ControlBehavior& GetBehavior() const{ return m_behavior; }
    inline void SetBehavior(const ControlBehavior& value) { m_behavior = value; }
    inline void SetBehavior(ControlBehavior&& value) { m_behavior = std::move(value); }
    inline GetControlResult& WithBehavior(const ControlBehavior& value) { SetBehavior(value); return *this;}
    inline GetControlResult& WithBehavior(ControlBehavior&& value) { SetBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const RegionConfiguration& GetRegionConfiguration() const{ return m_regionConfiguration; }
    inline void SetRegionConfiguration(const RegionConfiguration& value) { m_regionConfiguration = value; }
    inline void SetRegionConfiguration(RegionConfiguration&& value) { m_regionConfiguration = std::move(value); }
    inline GetControlResult& WithRegionConfiguration(const RegionConfiguration& value) { SetRegionConfiguration(value); return *this;}
    inline GetControlResult& WithRegionConfiguration(RegionConfiguration&& value) { SetRegionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns information about the control, as an
     * <code>ImplementationDetails</code> object that shows the underlying
     * implementation type for a control.</p>
     */
    inline const ImplementationDetails& GetImplementation() const{ return m_implementation; }
    inline void SetImplementation(const ImplementationDetails& value) { m_implementation = value; }
    inline void SetImplementation(ImplementationDetails&& value) { m_implementation = std::move(value); }
    inline GetControlResult& WithImplementation(const ImplementationDetails& value) { SetImplementation(value); return *this;}
    inline GetControlResult& WithImplementation(ImplementationDetails&& value) { SetImplementation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an array of <code>ControlParameter</code> objects that specify the
     * parameters a control supports. An empty list is returned for controls that don’t
     * support parameters. </p>
     */
    inline const Aws::Vector<ControlParameter>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Vector<ControlParameter>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Vector<ControlParameter>&& value) { m_parameters = std::move(value); }
    inline GetControlResult& WithParameters(const Aws::Vector<ControlParameter>& value) { SetParameters(value); return *this;}
    inline GetControlResult& WithParameters(Aws::Vector<ControlParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline GetControlResult& AddParameters(const ControlParameter& value) { m_parameters.push_back(value); return *this; }
    inline GetControlResult& AddParameters(ControlParameter&& value) { m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetControlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetControlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetControlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    ControlBehavior m_behavior;

    RegionConfiguration m_regionConfiguration;

    ImplementationDetails m_implementation;

    Aws::Vector<ControlParameter> m_parameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
