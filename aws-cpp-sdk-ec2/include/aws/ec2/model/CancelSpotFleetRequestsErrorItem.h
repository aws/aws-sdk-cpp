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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/CancelSpotFleetRequestsError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a Spot Fleet request that was not successfully
   * canceled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotFleetRequestsErrorItem">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CancelSpotFleetRequestsErrorItem
  {
  public:
    CancelSpotFleetRequestsErrorItem();
    CancelSpotFleetRequestsErrorItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    CancelSpotFleetRequestsErrorItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The error.</p>
     */
    inline const CancelSpotFleetRequestsError& GetError() const{ return m_error; }

    /**
     * <p>The error.</p>
     */
    inline void SetError(const CancelSpotFleetRequestsError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The error.</p>
     */
    inline void SetError(CancelSpotFleetRequestsError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The error.</p>
     */
    inline CancelSpotFleetRequestsErrorItem& WithError(const CancelSpotFleetRequestsError& value) { SetError(value); return *this;}

    /**
     * <p>The error.</p>
     */
    inline CancelSpotFleetRequestsErrorItem& WithError(CancelSpotFleetRequestsError&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline const Aws::String& GetSpotFleetRequestId() const{ return m_spotFleetRequestId; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const Aws::String& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = value; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(Aws::String&& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = std::move(value); }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const char* value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId.assign(value); }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline CancelSpotFleetRequestsErrorItem& WithSpotFleetRequestId(const Aws::String& value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline CancelSpotFleetRequestsErrorItem& WithSpotFleetRequestId(Aws::String&& value) { SetSpotFleetRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline CancelSpotFleetRequestsErrorItem& WithSpotFleetRequestId(const char* value) { SetSpotFleetRequestId(value); return *this;}

  private:

    CancelSpotFleetRequestsError m_error;
    bool m_errorHasBeenSet;

    Aws::String m_spotFleetRequestId;
    bool m_spotFleetRequestIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
