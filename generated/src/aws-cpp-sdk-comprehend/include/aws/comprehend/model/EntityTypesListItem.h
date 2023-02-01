/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>An entity type within a labeled training dataset that Amazon Comprehend uses
   * to train a custom entity recognizer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityTypesListItem">AWS
   * API Reference</a></p>
   */
  class EntityTypesListItem
  {
  public:
    AWS_COMPREHEND_API EntityTypesListItem();
    AWS_COMPREHEND_API EntityTypesListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityTypesListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An entity type within a labeled training dataset that Amazon Comprehend uses
     * to train a custom entity recognizer.</p> <p>Entity types must not contain the
     * following invalid characters: \n (line break), \\n (escaped line break, \r
     * (carriage return), \\r (escaped carriage return), \t (tab), \\t (escaped tab),
     * space, and , (comma).</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>An entity type within a labeled training dataset that Amazon Comprehend uses
     * to train a custom entity recognizer.</p> <p>Entity types must not contain the
     * following invalid characters: \n (line break), \\n (escaped line break, \r
     * (carriage return), \\r (escaped carriage return), \t (tab), \\t (escaped tab),
     * space, and , (comma).</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>An entity type within a labeled training dataset that Amazon Comprehend uses
     * to train a custom entity recognizer.</p> <p>Entity types must not contain the
     * following invalid characters: \n (line break), \\n (escaped line break, \r
     * (carriage return), \\r (escaped carriage return), \t (tab), \\t (escaped tab),
     * space, and , (comma).</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>An entity type within a labeled training dataset that Amazon Comprehend uses
     * to train a custom entity recognizer.</p> <p>Entity types must not contain the
     * following invalid characters: \n (line break), \\n (escaped line break, \r
     * (carriage return), \\r (escaped carriage return), \t (tab), \\t (escaped tab),
     * space, and , (comma).</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>An entity type within a labeled training dataset that Amazon Comprehend uses
     * to train a custom entity recognizer.</p> <p>Entity types must not contain the
     * following invalid characters: \n (line break), \\n (escaped line break, \r
     * (carriage return), \\r (escaped carriage return), \t (tab), \\t (escaped tab),
     * space, and , (comma).</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>An entity type within a labeled training dataset that Amazon Comprehend uses
     * to train a custom entity recognizer.</p> <p>Entity types must not contain the
     * following invalid characters: \n (line break), \\n (escaped line break, \r
     * (carriage return), \\r (escaped carriage return), \t (tab), \\t (escaped tab),
     * space, and , (comma).</p>
     */
    inline EntityTypesListItem& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>An entity type within a labeled training dataset that Amazon Comprehend uses
     * to train a custom entity recognizer.</p> <p>Entity types must not contain the
     * following invalid characters: \n (line break), \\n (escaped line break, \r
     * (carriage return), \\r (escaped carriage return), \t (tab), \\t (escaped tab),
     * space, and , (comma).</p>
     */
    inline EntityTypesListItem& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>An entity type within a labeled training dataset that Amazon Comprehend uses
     * to train a custom entity recognizer.</p> <p>Entity types must not contain the
     * following invalid characters: \n (line break), \\n (escaped line break, \r
     * (carriage return), \\r (escaped carriage return), \t (tab), \\t (escaped tab),
     * space, and , (comma).</p>
     */
    inline EntityTypesListItem& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
