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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RetentionType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The retention policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RetentionPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API RetentionPolicy
  {
  public:
    RetentionPolicy();
    RetentionPolicy(Aws::Utils::Json::JsonView jsonValue);
    RetentionPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The home Amazon Elastic File System (EFS).</p>
     */
    inline const RetentionType& GetHomeEfsFileSystem() const{ return m_homeEfsFileSystem; }

    /**
     * <p>The home Amazon Elastic File System (EFS).</p>
     */
    inline bool HomeEfsFileSystemHasBeenSet() const { return m_homeEfsFileSystemHasBeenSet; }

    /**
     * <p>The home Amazon Elastic File System (EFS).</p>
     */
    inline void SetHomeEfsFileSystem(const RetentionType& value) { m_homeEfsFileSystemHasBeenSet = true; m_homeEfsFileSystem = value; }

    /**
     * <p>The home Amazon Elastic File System (EFS).</p>
     */
    inline void SetHomeEfsFileSystem(RetentionType&& value) { m_homeEfsFileSystemHasBeenSet = true; m_homeEfsFileSystem = std::move(value); }

    /**
     * <p>The home Amazon Elastic File System (EFS).</p>
     */
    inline RetentionPolicy& WithHomeEfsFileSystem(const RetentionType& value) { SetHomeEfsFileSystem(value); return *this;}

    /**
     * <p>The home Amazon Elastic File System (EFS).</p>
     */
    inline RetentionPolicy& WithHomeEfsFileSystem(RetentionType&& value) { SetHomeEfsFileSystem(std::move(value)); return *this;}

  private:

    RetentionType m_homeEfsFileSystem;
    bool m_homeEfsFileSystemHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
