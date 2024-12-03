/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The Spark Amazon Web Services Glue args.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SparkGlueArgs">AWS
   * API Reference</a></p>
   */
  class SparkGlueArgs
  {
  public:
    AWS_DATAZONE_API SparkGlueArgs();
    AWS_DATAZONE_API SparkGlueArgs(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SparkGlueArgs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The connection in the Spark Amazon Web Services Glue args.</p>
     */
    inline const Aws::String& GetConnection() const{ return m_connection; }
    inline bool ConnectionHasBeenSet() const { return m_connectionHasBeenSet; }
    inline void SetConnection(const Aws::String& value) { m_connectionHasBeenSet = true; m_connection = value; }
    inline void SetConnection(Aws::String&& value) { m_connectionHasBeenSet = true; m_connection = std::move(value); }
    inline void SetConnection(const char* value) { m_connectionHasBeenSet = true; m_connection.assign(value); }
    inline SparkGlueArgs& WithConnection(const Aws::String& value) { SetConnection(value); return *this;}
    inline SparkGlueArgs& WithConnection(Aws::String&& value) { SetConnection(std::move(value)); return *this;}
    inline SparkGlueArgs& WithConnection(const char* value) { SetConnection(value); return *this;}
    ///@}
  private:

    Aws::String m_connection;
    bool m_connectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
