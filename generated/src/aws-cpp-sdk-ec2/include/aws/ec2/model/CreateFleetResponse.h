/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CreateFleetError.h>
#include <aws/ec2/model/CreateFleetInstance.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class CreateFleetResponse
  {
  public:
    AWS_EC2_API CreateFleetResponse();
    AWS_EC2_API CreateFleetResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateFleetResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline CreateFleetResponse& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline CreateFleetResponse& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline CreateFleetResponse& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Supported only for fleets of type <code>instant</code>.</p>
     */
    inline const Aws::Vector<CreateFleetError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Supported only for fleets of type <code>instant</code>.</p>
     */
    inline void SetErrors(const Aws::Vector<CreateFleetError>& value) { m_errors = value; }

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Supported only for fleets of type <code>instant</code>.</p>
     */
    inline void SetErrors(Aws::Vector<CreateFleetError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Supported only for fleets of type <code>instant</code>.</p>
     */
    inline CreateFleetResponse& WithErrors(const Aws::Vector<CreateFleetError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Supported only for fleets of type <code>instant</code>.</p>
     */
    inline CreateFleetResponse& WithErrors(Aws::Vector<CreateFleetError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Supported only for fleets of type <code>instant</code>.</p>
     */
    inline CreateFleetResponse& AddErrors(const CreateFleetError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Supported only for fleets of type <code>instant</code>.</p>
     */
    inline CreateFleetResponse& AddErrors(CreateFleetError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the instances that were launched by the fleet. Supported
     * only for fleets of type <code>instant</code>.</p>
     */
    inline const Aws::Vector<CreateFleetInstance>& GetInstances() const{ return m_instances; }

    /**
     * <p>Information about the instances that were launched by the fleet. Supported
     * only for fleets of type <code>instant</code>.</p>
     */
    inline void SetInstances(const Aws::Vector<CreateFleetInstance>& value) { m_instances = value; }

    /**
     * <p>Information about the instances that were launched by the fleet. Supported
     * only for fleets of type <code>instant</code>.</p>
     */
    inline void SetInstances(Aws::Vector<CreateFleetInstance>&& value) { m_instances = std::move(value); }

    /**
     * <p>Information about the instances that were launched by the fleet. Supported
     * only for fleets of type <code>instant</code>.</p>
     */
    inline CreateFleetResponse& WithInstances(const Aws::Vector<CreateFleetInstance>& value) { SetInstances(value); return *this;}

    /**
     * <p>Information about the instances that were launched by the fleet. Supported
     * only for fleets of type <code>instant</code>.</p>
     */
    inline CreateFleetResponse& WithInstances(Aws::Vector<CreateFleetInstance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>Information about the instances that were launched by the fleet. Supported
     * only for fleets of type <code>instant</code>.</p>
     */
    inline CreateFleetResponse& AddInstances(const CreateFleetInstance& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>Information about the instances that were launched by the fleet. Supported
     * only for fleets of type <code>instant</code>.</p>
     */
    inline CreateFleetResponse& AddInstances(CreateFleetInstance&& value) { m_instances.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateFleetResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateFleetResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_fleetId;

    Aws::Vector<CreateFleetError> m_errors;

    Aws::Vector<CreateFleetInstance> m_instances;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
