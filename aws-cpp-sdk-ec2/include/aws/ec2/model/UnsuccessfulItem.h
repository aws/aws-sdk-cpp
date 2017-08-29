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
#include <aws/ec2/model/UnsuccessfulItemError.h>
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
   * <p>Information about items that were not successfully processed in a batch
   * call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnsuccessfulItem">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API UnsuccessfulItem
  {
  public:
    UnsuccessfulItem();
    UnsuccessfulItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    UnsuccessfulItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Information about the error.</p>
     */
    inline const UnsuccessfulItemError& GetError() const{ return m_error; }

    /**
     * <p>Information about the error.</p>
     */
    inline void SetError(const UnsuccessfulItemError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Information about the error.</p>
     */
    inline void SetError(UnsuccessfulItemError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Information about the error.</p>
     */
    inline UnsuccessfulItem& WithError(const UnsuccessfulItemError& value) { SetError(value); return *this;}

    /**
     * <p>Information about the error.</p>
     */
    inline UnsuccessfulItem& WithError(UnsuccessfulItemError&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline UnsuccessfulItem& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline UnsuccessfulItem& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline UnsuccessfulItem& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    UnsuccessfulItemError m_error;
    bool m_errorHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
