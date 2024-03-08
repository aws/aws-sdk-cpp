/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about values of a predefined attribute.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PredefinedAttributeValues">AWS
   * API Reference</a></p>
   */
  class PredefinedAttributeValues
  {
  public:
    AWS_CONNECT_API PredefinedAttributeValues();
    AWS_CONNECT_API PredefinedAttributeValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PredefinedAttributeValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Predefined attribute values of type string list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringList() const{ return m_stringList; }

    /**
     * <p>Predefined attribute values of type string list.</p>
     */
    inline bool StringListHasBeenSet() const { return m_stringListHasBeenSet; }

    /**
     * <p>Predefined attribute values of type string list.</p>
     */
    inline void SetStringList(const Aws::Vector<Aws::String>& value) { m_stringListHasBeenSet = true; m_stringList = value; }

    /**
     * <p>Predefined attribute values of type string list.</p>
     */
    inline void SetStringList(Aws::Vector<Aws::String>&& value) { m_stringListHasBeenSet = true; m_stringList = std::move(value); }

    /**
     * <p>Predefined attribute values of type string list.</p>
     */
    inline PredefinedAttributeValues& WithStringList(const Aws::Vector<Aws::String>& value) { SetStringList(value); return *this;}

    /**
     * <p>Predefined attribute values of type string list.</p>
     */
    inline PredefinedAttributeValues& WithStringList(Aws::Vector<Aws::String>&& value) { SetStringList(std::move(value)); return *this;}

    /**
     * <p>Predefined attribute values of type string list.</p>
     */
    inline PredefinedAttributeValues& AddStringList(const Aws::String& value) { m_stringListHasBeenSet = true; m_stringList.push_back(value); return *this; }

    /**
     * <p>Predefined attribute values of type string list.</p>
     */
    inline PredefinedAttributeValues& AddStringList(Aws::String&& value) { m_stringListHasBeenSet = true; m_stringList.push_back(std::move(value)); return *this; }

    /**
     * <p>Predefined attribute values of type string list.</p>
     */
    inline PredefinedAttributeValues& AddStringList(const char* value) { m_stringListHasBeenSet = true; m_stringList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_stringList;
    bool m_stringListHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
