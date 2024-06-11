/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/SchemaChangeType.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Object encompassing information about a schema change to a single, particular
   * field, a notification can have up to 100 of these.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/SchemaChangeDetails">AWS
   * API Reference</a></p>
   */
  class SchemaChangeDetails
  {
  public:
    AWS_DATAEXCHANGE_API SchemaChangeDetails();
    AWS_DATAEXCHANGE_API SchemaChangeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API SchemaChangeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the changing field. This value can be up to 255 characters long.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SchemaChangeDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SchemaChangeDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SchemaChangeDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Is the field being added, removed, or modified?</p>
     */
    inline const SchemaChangeType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SchemaChangeType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SchemaChangeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SchemaChangeDetails& WithType(const SchemaChangeType& value) { SetType(value); return *this;}
    inline SchemaChangeDetails& WithType(SchemaChangeType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of what's changing about this field. This value can be up to 512
     * characters long.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SchemaChangeDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SchemaChangeDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SchemaChangeDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SchemaChangeType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
