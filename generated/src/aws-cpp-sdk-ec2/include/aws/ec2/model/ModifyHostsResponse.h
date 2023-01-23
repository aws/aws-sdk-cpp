/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/UnsuccessfulItem.h>
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
  class ModifyHostsResponse
  {
  public:
    AWS_EC2_API ModifyHostsResponse();
    AWS_EC2_API ModifyHostsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyHostsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The IDs of the Dedicated Hosts that were successfully modified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessful() const{ return m_successful; }

    /**
     * <p>The IDs of the Dedicated Hosts that were successfully modified.</p>
     */
    inline void SetSuccessful(const Aws::Vector<Aws::String>& value) { m_successful = value; }

    /**
     * <p>The IDs of the Dedicated Hosts that were successfully modified.</p>
     */
    inline void SetSuccessful(Aws::Vector<Aws::String>&& value) { m_successful = std::move(value); }

    /**
     * <p>The IDs of the Dedicated Hosts that were successfully modified.</p>
     */
    inline ModifyHostsResponse& WithSuccessful(const Aws::Vector<Aws::String>& value) { SetSuccessful(value); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts that were successfully modified.</p>
     */
    inline ModifyHostsResponse& WithSuccessful(Aws::Vector<Aws::String>&& value) { SetSuccessful(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts that were successfully modified.</p>
     */
    inline ModifyHostsResponse& AddSuccessful(const Aws::String& value) { m_successful.push_back(value); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts that were successfully modified.</p>
     */
    inline ModifyHostsResponse& AddSuccessful(Aws::String&& value) { m_successful.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts that were successfully modified.</p>
     */
    inline ModifyHostsResponse& AddSuccessful(const char* value) { m_successful.push_back(value); return *this; }


    /**
     * <p>The IDs of the Dedicated Hosts that could not be modified. Check whether the
     * setting you requested can be used.</p>
     */
    inline const Aws::Vector<UnsuccessfulItem>& GetUnsuccessful() const{ return m_unsuccessful; }

    /**
     * <p>The IDs of the Dedicated Hosts that could not be modified. Check whether the
     * setting you requested can be used.</p>
     */
    inline void SetUnsuccessful(const Aws::Vector<UnsuccessfulItem>& value) { m_unsuccessful = value; }

    /**
     * <p>The IDs of the Dedicated Hosts that could not be modified. Check whether the
     * setting you requested can be used.</p>
     */
    inline void SetUnsuccessful(Aws::Vector<UnsuccessfulItem>&& value) { m_unsuccessful = std::move(value); }

    /**
     * <p>The IDs of the Dedicated Hosts that could not be modified. Check whether the
     * setting you requested can be used.</p>
     */
    inline ModifyHostsResponse& WithUnsuccessful(const Aws::Vector<UnsuccessfulItem>& value) { SetUnsuccessful(value); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts that could not be modified. Check whether the
     * setting you requested can be used.</p>
     */
    inline ModifyHostsResponse& WithUnsuccessful(Aws::Vector<UnsuccessfulItem>&& value) { SetUnsuccessful(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts that could not be modified. Check whether the
     * setting you requested can be used.</p>
     */
    inline ModifyHostsResponse& AddUnsuccessful(const UnsuccessfulItem& value) { m_unsuccessful.push_back(value); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts that could not be modified. Check whether the
     * setting you requested can be used.</p>
     */
    inline ModifyHostsResponse& AddUnsuccessful(UnsuccessfulItem&& value) { m_unsuccessful.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyHostsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyHostsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_successful;

    Aws::Vector<UnsuccessfulItem> m_unsuccessful;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
