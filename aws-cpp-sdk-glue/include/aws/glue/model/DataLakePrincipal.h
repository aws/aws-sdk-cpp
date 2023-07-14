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
   * <p>The Lake Formation principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataLakePrincipal">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API DataLakePrincipal
  {
  public:
    DataLakePrincipal();
    DataLakePrincipal(Aws::Utils::Json::JsonView jsonValue);
    DataLakePrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier for the Lake Formation principal.</p>
     */
    inline const Aws::String& GetDataLakePrincipalIdentifier() const{ return m_dataLakePrincipalIdentifier; }

    /**
     * <p>An identifier for the Lake Formation principal.</p>
     */
    inline bool DataLakePrincipalIdentifierHasBeenSet() const { return m_dataLakePrincipalIdentifierHasBeenSet; }

    /**
     * <p>An identifier for the Lake Formation principal.</p>
     */
    inline void SetDataLakePrincipalIdentifier(const Aws::String& value) { m_dataLakePrincipalIdentifierHasBeenSet = true; m_dataLakePrincipalIdentifier = value; }

    /**
     * <p>An identifier for the Lake Formation principal.</p>
     */
    inline void SetDataLakePrincipalIdentifier(Aws::String&& value) { m_dataLakePrincipalIdentifierHasBeenSet = true; m_dataLakePrincipalIdentifier = std::move(value); }

    /**
     * <p>An identifier for the Lake Formation principal.</p>
     */
    inline void SetDataLakePrincipalIdentifier(const char* value) { m_dataLakePrincipalIdentifierHasBeenSet = true; m_dataLakePrincipalIdentifier.assign(value); }

    /**
     * <p>An identifier for the Lake Formation principal.</p>
     */
    inline DataLakePrincipal& WithDataLakePrincipalIdentifier(const Aws::String& value) { SetDataLakePrincipalIdentifier(value); return *this;}

    /**
     * <p>An identifier for the Lake Formation principal.</p>
     */
    inline DataLakePrincipal& WithDataLakePrincipalIdentifier(Aws::String&& value) { SetDataLakePrincipalIdentifier(std::move(value)); return *this;}

    /**
     * <p>An identifier for the Lake Formation principal.</p>
     */
    inline DataLakePrincipal& WithDataLakePrincipalIdentifier(const char* value) { SetDataLakePrincipalIdentifier(value); return *this;}

  private:

    Aws::String m_dataLakePrincipalIdentifier;
    bool m_dataLakePrincipalIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
