/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/ScheduledActionFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A set of elements to filter the returned scheduled actions. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ScheduledActionFilter">AWS
   * API Reference</a></p>
   */
  class ScheduledActionFilter
  {
  public:
    AWS_REDSHIFT_API ScheduledActionFilter();
    AWS_REDSHIFT_API ScheduledActionFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ScheduledActionFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of element to filter. </p>
     */
    inline const ScheduledActionFilterName& GetName() const{ return m_name; }

    /**
     * <p>The type of element to filter. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The type of element to filter. </p>
     */
    inline void SetName(const ScheduledActionFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The type of element to filter. </p>
     */
    inline void SetName(ScheduledActionFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The type of element to filter. </p>
     */
    inline ScheduledActionFilter& WithName(const ScheduledActionFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The type of element to filter. </p>
     */
    inline ScheduledActionFilter& WithName(ScheduledActionFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>List of values. Compare if the value (of type defined by <code>Name</code>)
     * equals an item in the list of scheduled actions. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>List of values. Compare if the value (of type defined by <code>Name</code>)
     * equals an item in the list of scheduled actions. </p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>List of values. Compare if the value (of type defined by <code>Name</code>)
     * equals an item in the list of scheduled actions. </p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>List of values. Compare if the value (of type defined by <code>Name</code>)
     * equals an item in the list of scheduled actions. </p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>List of values. Compare if the value (of type defined by <code>Name</code>)
     * equals an item in the list of scheduled actions. </p>
     */
    inline ScheduledActionFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>List of values. Compare if the value (of type defined by <code>Name</code>)
     * equals an item in the list of scheduled actions. </p>
     */
    inline ScheduledActionFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>List of values. Compare if the value (of type defined by <code>Name</code>)
     * equals an item in the list of scheduled actions. </p>
     */
    inline ScheduledActionFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>List of values. Compare if the value (of type defined by <code>Name</code>)
     * equals an item in the list of scheduled actions. </p>
     */
    inline ScheduledActionFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>List of values. Compare if the value (of type defined by <code>Name</code>)
     * equals an item in the list of scheduled actions. </p>
     */
    inline ScheduledActionFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    ScheduledActionFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
