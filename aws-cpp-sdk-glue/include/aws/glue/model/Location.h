/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CodeGenNodeArg.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>The location of resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Location">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Location
  {
  public:
    Location();
    Location(const Aws::Utils::Json::JsonValue& jsonValue);
    Location& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A JDBC location.</p>
     */
    inline const Aws::Vector<CodeGenNodeArg>& GetJdbc() const{ return m_jdbc; }

    /**
     * <p>A JDBC location.</p>
     */
    inline void SetJdbc(const Aws::Vector<CodeGenNodeArg>& value) { m_jdbcHasBeenSet = true; m_jdbc = value; }

    /**
     * <p>A JDBC location.</p>
     */
    inline void SetJdbc(Aws::Vector<CodeGenNodeArg>&& value) { m_jdbcHasBeenSet = true; m_jdbc = std::move(value); }

    /**
     * <p>A JDBC location.</p>
     */
    inline Location& WithJdbc(const Aws::Vector<CodeGenNodeArg>& value) { SetJdbc(value); return *this;}

    /**
     * <p>A JDBC location.</p>
     */
    inline Location& WithJdbc(Aws::Vector<CodeGenNodeArg>&& value) { SetJdbc(std::move(value)); return *this;}

    /**
     * <p>A JDBC location.</p>
     */
    inline Location& AddJdbc(const CodeGenNodeArg& value) { m_jdbcHasBeenSet = true; m_jdbc.push_back(value); return *this; }

    /**
     * <p>A JDBC location.</p>
     */
    inline Location& AddJdbc(CodeGenNodeArg&& value) { m_jdbcHasBeenSet = true; m_jdbc.push_back(std::move(value)); return *this; }


    /**
     * <p>An Amazon S3 location.</p>
     */
    inline const Aws::Vector<CodeGenNodeArg>& GetS3() const{ return m_s3; }

    /**
     * <p>An Amazon S3 location.</p>
     */
    inline void SetS3(const Aws::Vector<CodeGenNodeArg>& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>An Amazon S3 location.</p>
     */
    inline void SetS3(Aws::Vector<CodeGenNodeArg>&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>An Amazon S3 location.</p>
     */
    inline Location& WithS3(const Aws::Vector<CodeGenNodeArg>& value) { SetS3(value); return *this;}

    /**
     * <p>An Amazon S3 location.</p>
     */
    inline Location& WithS3(Aws::Vector<CodeGenNodeArg>&& value) { SetS3(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 location.</p>
     */
    inline Location& AddS3(const CodeGenNodeArg& value) { m_s3HasBeenSet = true; m_s3.push_back(value); return *this; }

    /**
     * <p>An Amazon S3 location.</p>
     */
    inline Location& AddS3(CodeGenNodeArg&& value) { m_s3HasBeenSet = true; m_s3.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CodeGenNodeArg> m_jdbc;
    bool m_jdbcHasBeenSet;

    Aws::Vector<CodeGenNodeArg> m_s3;
    bool m_s3HasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
