/**
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
   * <p>A structure representing the datatype of the value.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Datatype">AWS
   * API Reference</a></p>
   */
  class Datatype
  {
  public:
    AWS_GLUE_API Datatype();
    AWS_GLUE_API Datatype(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Datatype& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The datatype of the value.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The datatype of the value.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The datatype of the value.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The datatype of the value.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The datatype of the value.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The datatype of the value.</p>
     */
    inline Datatype& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The datatype of the value.</p>
     */
    inline Datatype& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The datatype of the value.</p>
     */
    inline Datatype& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A label assigned to the datatype.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>A label assigned to the datatype.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>A label assigned to the datatype.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>A label assigned to the datatype.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>A label assigned to the datatype.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>A label assigned to the datatype.</p>
     */
    inline Datatype& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>A label assigned to the datatype.</p>
     */
    inline Datatype& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>A label assigned to the datatype.</p>
     */
    inline Datatype& WithLabel(const char* value) { SetLabel(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
