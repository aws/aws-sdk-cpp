/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/StackInstanceFilterName.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The filter to apply to stack instances</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackInstanceFilter">AWS
   * API Reference</a></p>
   */
  class StackInstanceFilter
  {
  public:
    AWS_CLOUDFORMATION_API StackInstanceFilter();
    AWS_CLOUDFORMATION_API StackInstanceFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackInstanceFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of filter to apply.</p>
     */
    inline const StackInstanceFilterName& GetName() const{ return m_name; }

    /**
     * <p>The type of filter to apply.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The type of filter to apply.</p>
     */
    inline void SetName(const StackInstanceFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The type of filter to apply.</p>
     */
    inline void SetName(StackInstanceFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The type of filter to apply.</p>
     */
    inline StackInstanceFilter& WithName(const StackInstanceFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The type of filter to apply.</p>
     */
    inline StackInstanceFilter& WithName(StackInstanceFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The status to filter by.</p>
     */
    inline const Aws::String& GetValues() const{ return m_values; }

    /**
     * <p>The status to filter by.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The status to filter by.</p>
     */
    inline void SetValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The status to filter by.</p>
     */
    inline void SetValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The status to filter by.</p>
     */
    inline void SetValues(const char* value) { m_valuesHasBeenSet = true; m_values.assign(value); }

    /**
     * <p>The status to filter by.</p>
     */
    inline StackInstanceFilter& WithValues(const Aws::String& value) { SetValues(value); return *this;}

    /**
     * <p>The status to filter by.</p>
     */
    inline StackInstanceFilter& WithValues(Aws::String&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The status to filter by.</p>
     */
    inline StackInstanceFilter& WithValues(const char* value) { SetValues(value); return *this;}

  private:

    StackInstanceFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
