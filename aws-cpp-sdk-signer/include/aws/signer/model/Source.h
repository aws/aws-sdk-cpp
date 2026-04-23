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
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/S3Source.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>An <code>S3Source</code> object that contains information about the S3 bucket
   * where you saved your unsigned code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/Source">AWS API
   * Reference</a></p>
   */
  class AWS_SIGNER_API Source
  {
  public:
    Source();
    Source(Aws::Utils::Json::JsonView jsonValue);
    Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>S3Source</code> object.</p>
     */
    inline const S3Source& GetS3() const{ return m_s3; }

    /**
     * <p>The <code>S3Source</code> object.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>The <code>S3Source</code> object.</p>
     */
    inline void SetS3(const S3Source& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>The <code>S3Source</code> object.</p>
     */
    inline void SetS3(S3Source&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>The <code>S3Source</code> object.</p>
     */
    inline Source& WithS3(const S3Source& value) { SetS3(value); return *this;}

    /**
     * <p>The <code>S3Source</code> object.</p>
     */
    inline Source& WithS3(S3Source&& value) { SetS3(std::move(value)); return *this;}

  private:

    S3Source m_s3;
    bool m_s3HasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
