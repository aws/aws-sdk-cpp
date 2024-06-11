/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>A list of <code>OutputAttribute</code> objects, each of which have the fields
   * <code>Name</code> and <code>Hashed</code>. Each of these objects selects a
   * column to be included in the output table, and whether the values of the column
   * should be hashed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/OutputAttribute">AWS
   * API Reference</a></p>
   */
  class OutputAttribute
  {
  public:
    AWS_ENTITYRESOLUTION_API OutputAttribute();
    AWS_ENTITYRESOLUTION_API OutputAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API OutputAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables the ability to hash the column values in the output.</p>
     */
    inline bool GetHashed() const{ return m_hashed; }
    inline bool HashedHasBeenSet() const { return m_hashedHasBeenSet; }
    inline void SetHashed(bool value) { m_hashedHasBeenSet = true; m_hashed = value; }
    inline OutputAttribute& WithHashed(bool value) { SetHashed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name of a column to be written to the output. This must be an
     * <code>InputField</code> name in the schema mapping.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline OutputAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline OutputAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline OutputAttribute& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    bool m_hashed;
    bool m_hashedHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
