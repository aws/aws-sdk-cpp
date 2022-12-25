/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Shows the group that a certain key belongs to. This helps differentiate
   * between names and addresses for different organizations, that can be hard to
   * determine via JSON response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ExpenseGroupProperty">AWS
   * API Reference</a></p>
   */
  class ExpenseGroupProperty
  {
  public:
    AWS_TEXTRACT_API ExpenseGroupProperty();
    AWS_TEXTRACT_API ExpenseGroupProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API ExpenseGroupProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Informs you on whether the expense group is a name or an address.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const{ return m_types; }

    /**
     * <p>Informs you on whether the expense group is a name or an address.</p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>Informs you on whether the expense group is a name or an address.</p>
     */
    inline void SetTypes(const Aws::Vector<Aws::String>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>Informs you on whether the expense group is a name or an address.</p>
     */
    inline void SetTypes(Aws::Vector<Aws::String>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>Informs you on whether the expense group is a name or an address.</p>
     */
    inline ExpenseGroupProperty& WithTypes(const Aws::Vector<Aws::String>& value) { SetTypes(value); return *this;}

    /**
     * <p>Informs you on whether the expense group is a name or an address.</p>
     */
    inline ExpenseGroupProperty& WithTypes(Aws::Vector<Aws::String>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>Informs you on whether the expense group is a name or an address.</p>
     */
    inline ExpenseGroupProperty& AddTypes(const Aws::String& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>Informs you on whether the expense group is a name or an address.</p>
     */
    inline ExpenseGroupProperty& AddTypes(Aws::String&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }

    /**
     * <p>Informs you on whether the expense group is a name or an address.</p>
     */
    inline ExpenseGroupProperty& AddTypes(const char* value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }


    /**
     * <p>Provides a group Id number, which will be the same for each in the group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Provides a group Id number, which will be the same for each in the group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Provides a group Id number, which will be the same for each in the group.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Provides a group Id number, which will be the same for each in the group.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Provides a group Id number, which will be the same for each in the group.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Provides a group Id number, which will be the same for each in the group.</p>
     */
    inline ExpenseGroupProperty& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Provides a group Id number, which will be the same for each in the group.</p>
     */
    inline ExpenseGroupProperty& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Provides a group Id number, which will be the same for each in the group.</p>
     */
    inline ExpenseGroupProperty& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
