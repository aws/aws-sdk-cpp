/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>A piece of data (a field in the table).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/Datum">AWS API
   * Reference</a></p>
   */
  class Datum
  {
  public:
    AWS_ATHENA_API Datum();
    AWS_ATHENA_API Datum(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Datum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the datum.</p>
     */
    inline const Aws::String& GetVarCharValue() const{ return m_varCharValue; }

    /**
     * <p>The value of the datum.</p>
     */
    inline bool VarCharValueHasBeenSet() const { return m_varCharValueHasBeenSet; }

    /**
     * <p>The value of the datum.</p>
     */
    inline void SetVarCharValue(const Aws::String& value) { m_varCharValueHasBeenSet = true; m_varCharValue = value; }

    /**
     * <p>The value of the datum.</p>
     */
    inline void SetVarCharValue(Aws::String&& value) { m_varCharValueHasBeenSet = true; m_varCharValue = std::move(value); }

    /**
     * <p>The value of the datum.</p>
     */
    inline void SetVarCharValue(const char* value) { m_varCharValueHasBeenSet = true; m_varCharValue.assign(value); }

    /**
     * <p>The value of the datum.</p>
     */
    inline Datum& WithVarCharValue(const Aws::String& value) { SetVarCharValue(value); return *this;}

    /**
     * <p>The value of the datum.</p>
     */
    inline Datum& WithVarCharValue(Aws::String&& value) { SetVarCharValue(std::move(value)); return *this;}

    /**
     * <p>The value of the datum.</p>
     */
    inline Datum& WithVarCharValue(const char* value) { SetVarCharValue(value); return *this;}

  private:

    Aws::String m_varCharValue;
    bool m_varCharValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
