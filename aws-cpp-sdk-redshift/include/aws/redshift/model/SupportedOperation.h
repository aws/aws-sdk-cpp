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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes the operations that are allowed on a maintenance
   * track.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/SupportedOperation">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API SupportedOperation
  {
  public:
    SupportedOperation();
    SupportedOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    SupportedOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A list of the supported operations.</p>
     */
    inline const Aws::String& GetOperationName() const{ return m_operationName; }

    /**
     * <p>A list of the supported operations.</p>
     */
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }

    /**
     * <p>A list of the supported operations.</p>
     */
    inline void SetOperationName(const Aws::String& value) { m_operationNameHasBeenSet = true; m_operationName = value; }

    /**
     * <p>A list of the supported operations.</p>
     */
    inline void SetOperationName(Aws::String&& value) { m_operationNameHasBeenSet = true; m_operationName = std::move(value); }

    /**
     * <p>A list of the supported operations.</p>
     */
    inline void SetOperationName(const char* value) { m_operationNameHasBeenSet = true; m_operationName.assign(value); }

    /**
     * <p>A list of the supported operations.</p>
     */
    inline SupportedOperation& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}

    /**
     * <p>A list of the supported operations.</p>
     */
    inline SupportedOperation& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}

    /**
     * <p>A list of the supported operations.</p>
     */
    inline SupportedOperation& WithOperationName(const char* value) { SetOperationName(value); return *this;}

  private:

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
