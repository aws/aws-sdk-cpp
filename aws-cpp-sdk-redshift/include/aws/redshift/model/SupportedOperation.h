/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SupportedOperation
  {
  public:
    AWS_REDSHIFT_API SupportedOperation();
    AWS_REDSHIFT_API SupportedOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API SupportedOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_operationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
