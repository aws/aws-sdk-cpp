﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A partition key pair consisting of a name and a type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/KeySchemaElement">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API KeySchemaElement
  {
  public:
    KeySchemaElement();
    KeySchemaElement(Aws::Utils::Json::JsonView jsonValue);
    KeySchemaElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a partition key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a partition key.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a partition key.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a partition key.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a partition key.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a partition key.</p>
     */
    inline KeySchemaElement& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a partition key.</p>
     */
    inline KeySchemaElement& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a partition key.</p>
     */
    inline KeySchemaElement& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of a partition key.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of a partition key.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of a partition key.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of a partition key.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of a partition key.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of a partition key.</p>
     */
    inline KeySchemaElement& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of a partition key.</p>
     */
    inline KeySchemaElement& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of a partition key.</p>
     */
    inline KeySchemaElement& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
