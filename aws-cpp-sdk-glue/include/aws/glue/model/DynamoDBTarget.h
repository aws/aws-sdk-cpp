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
   * <p>Specifies an Amazon DynamoDB table to crawl.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DynamoDBTarget">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API DynamoDBTarget
  {
  public:
    DynamoDBTarget();
    DynamoDBTarget(Aws::Utils::Json::JsonView jsonValue);
    DynamoDBTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the DynamoDB table to crawl.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The name of the DynamoDB table to crawl.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The name of the DynamoDB table to crawl.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The name of the DynamoDB table to crawl.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The name of the DynamoDB table to crawl.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The name of the DynamoDB table to crawl.</p>
     */
    inline DynamoDBTarget& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The name of the DynamoDB table to crawl.</p>
     */
    inline DynamoDBTarget& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The name of the DynamoDB table to crawl.</p>
     */
    inline DynamoDBTarget& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
