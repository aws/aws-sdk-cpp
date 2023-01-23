/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the DescribeEndpoint operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeEndpointRequest">AWS
   * API Reference</a></p>
   */
  class DescribeEndpointRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEndpoint"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The endpoint type. Valid endpoint types include:</p> <ul> <li> <p>
     * <code>iot:Data</code> - Returns a VeriSign signed data endpoint.</p> </li> </ul>
     * <ul> <li> <p> <code>iot:Data-ATS</code> - Returns an ATS signed data
     * endpoint.</p> </li> </ul> <ul> <li> <p> <code>iot:CredentialProvider</code> -
     * Returns an IoT credentials provider API endpoint.</p> </li> </ul> <ul> <li> <p>
     * <code>iot:Jobs</code> - Returns an IoT device management Jobs API endpoint.</p>
     * </li> </ul> <p>We strongly recommend that customers use the newer
     * <code>iot:Data-ATS</code> endpoint type to avoid issues related to the
     * widespread distrust of Symantec certificate authorities.</p>
     */
    inline const Aws::String& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The endpoint type. Valid endpoint types include:</p> <ul> <li> <p>
     * <code>iot:Data</code> - Returns a VeriSign signed data endpoint.</p> </li> </ul>
     * <ul> <li> <p> <code>iot:Data-ATS</code> - Returns an ATS signed data
     * endpoint.</p> </li> </ul> <ul> <li> <p> <code>iot:CredentialProvider</code> -
     * Returns an IoT credentials provider API endpoint.</p> </li> </ul> <ul> <li> <p>
     * <code>iot:Jobs</code> - Returns an IoT device management Jobs API endpoint.</p>
     * </li> </ul> <p>We strongly recommend that customers use the newer
     * <code>iot:Data-ATS</code> endpoint type to avoid issues related to the
     * widespread distrust of Symantec certificate authorities.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The endpoint type. Valid endpoint types include:</p> <ul> <li> <p>
     * <code>iot:Data</code> - Returns a VeriSign signed data endpoint.</p> </li> </ul>
     * <ul> <li> <p> <code>iot:Data-ATS</code> - Returns an ATS signed data
     * endpoint.</p> </li> </ul> <ul> <li> <p> <code>iot:CredentialProvider</code> -
     * Returns an IoT credentials provider API endpoint.</p> </li> </ul> <ul> <li> <p>
     * <code>iot:Jobs</code> - Returns an IoT device management Jobs API endpoint.</p>
     * </li> </ul> <p>We strongly recommend that customers use the newer
     * <code>iot:Data-ATS</code> endpoint type to avoid issues related to the
     * widespread distrust of Symantec certificate authorities.</p>
     */
    inline void SetEndpointType(const Aws::String& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The endpoint type. Valid endpoint types include:</p> <ul> <li> <p>
     * <code>iot:Data</code> - Returns a VeriSign signed data endpoint.</p> </li> </ul>
     * <ul> <li> <p> <code>iot:Data-ATS</code> - Returns an ATS signed data
     * endpoint.</p> </li> </ul> <ul> <li> <p> <code>iot:CredentialProvider</code> -
     * Returns an IoT credentials provider API endpoint.</p> </li> </ul> <ul> <li> <p>
     * <code>iot:Jobs</code> - Returns an IoT device management Jobs API endpoint.</p>
     * </li> </ul> <p>We strongly recommend that customers use the newer
     * <code>iot:Data-ATS</code> endpoint type to avoid issues related to the
     * widespread distrust of Symantec certificate authorities.</p>
     */
    inline void SetEndpointType(Aws::String&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The endpoint type. Valid endpoint types include:</p> <ul> <li> <p>
     * <code>iot:Data</code> - Returns a VeriSign signed data endpoint.</p> </li> </ul>
     * <ul> <li> <p> <code>iot:Data-ATS</code> - Returns an ATS signed data
     * endpoint.</p> </li> </ul> <ul> <li> <p> <code>iot:CredentialProvider</code> -
     * Returns an IoT credentials provider API endpoint.</p> </li> </ul> <ul> <li> <p>
     * <code>iot:Jobs</code> - Returns an IoT device management Jobs API endpoint.</p>
     * </li> </ul> <p>We strongly recommend that customers use the newer
     * <code>iot:Data-ATS</code> endpoint type to avoid issues related to the
     * widespread distrust of Symantec certificate authorities.</p>
     */
    inline void SetEndpointType(const char* value) { m_endpointTypeHasBeenSet = true; m_endpointType.assign(value); }

    /**
     * <p>The endpoint type. Valid endpoint types include:</p> <ul> <li> <p>
     * <code>iot:Data</code> - Returns a VeriSign signed data endpoint.</p> </li> </ul>
     * <ul> <li> <p> <code>iot:Data-ATS</code> - Returns an ATS signed data
     * endpoint.</p> </li> </ul> <ul> <li> <p> <code>iot:CredentialProvider</code> -
     * Returns an IoT credentials provider API endpoint.</p> </li> </ul> <ul> <li> <p>
     * <code>iot:Jobs</code> - Returns an IoT device management Jobs API endpoint.</p>
     * </li> </ul> <p>We strongly recommend that customers use the newer
     * <code>iot:Data-ATS</code> endpoint type to avoid issues related to the
     * widespread distrust of Symantec certificate authorities.</p>
     */
    inline DescribeEndpointRequest& WithEndpointType(const Aws::String& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The endpoint type. Valid endpoint types include:</p> <ul> <li> <p>
     * <code>iot:Data</code> - Returns a VeriSign signed data endpoint.</p> </li> </ul>
     * <ul> <li> <p> <code>iot:Data-ATS</code> - Returns an ATS signed data
     * endpoint.</p> </li> </ul> <ul> <li> <p> <code>iot:CredentialProvider</code> -
     * Returns an IoT credentials provider API endpoint.</p> </li> </ul> <ul> <li> <p>
     * <code>iot:Jobs</code> - Returns an IoT device management Jobs API endpoint.</p>
     * </li> </ul> <p>We strongly recommend that customers use the newer
     * <code>iot:Data-ATS</code> endpoint type to avoid issues related to the
     * widespread distrust of Symantec certificate authorities.</p>
     */
    inline DescribeEndpointRequest& WithEndpointType(Aws::String&& value) { SetEndpointType(std::move(value)); return *this;}

    /**
     * <p>The endpoint type. Valid endpoint types include:</p> <ul> <li> <p>
     * <code>iot:Data</code> - Returns a VeriSign signed data endpoint.</p> </li> </ul>
     * <ul> <li> <p> <code>iot:Data-ATS</code> - Returns an ATS signed data
     * endpoint.</p> </li> </ul> <ul> <li> <p> <code>iot:CredentialProvider</code> -
     * Returns an IoT credentials provider API endpoint.</p> </li> </ul> <ul> <li> <p>
     * <code>iot:Jobs</code> - Returns an IoT device management Jobs API endpoint.</p>
     * </li> </ul> <p>We strongly recommend that customers use the newer
     * <code>iot:Data-ATS</code> endpoint type to avoid issues related to the
     * widespread distrust of Symantec certificate authorities.</p>
     */
    inline DescribeEndpointRequest& WithEndpointType(const char* value) { SetEndpointType(value); return *this;}

  private:

    Aws::String m_endpointType;
    bool m_endpointTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
