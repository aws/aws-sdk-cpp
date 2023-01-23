/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie/model/FailedS3Resource.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie
{
namespace Model
{
  class AssociateS3ResourcesResult
  {
  public:
    AWS_MACIE_API AssociateS3ResourcesResult();
    AWS_MACIE_API AssociateS3ResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE_API AssociateS3ResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>(Discontinued) S3 resources that couldn't be associated with Amazon Macie
     * Classic. An error code and an error message are provided for each failed
     * item.</p>
     */
    inline const Aws::Vector<FailedS3Resource>& GetFailedS3Resources() const{ return m_failedS3Resources; }

    /**
     * <p>(Discontinued) S3 resources that couldn't be associated with Amazon Macie
     * Classic. An error code and an error message are provided for each failed
     * item.</p>
     */
    inline void SetFailedS3Resources(const Aws::Vector<FailedS3Resource>& value) { m_failedS3Resources = value; }

    /**
     * <p>(Discontinued) S3 resources that couldn't be associated with Amazon Macie
     * Classic. An error code and an error message are provided for each failed
     * item.</p>
     */
    inline void SetFailedS3Resources(Aws::Vector<FailedS3Resource>&& value) { m_failedS3Resources = std::move(value); }

    /**
     * <p>(Discontinued) S3 resources that couldn't be associated with Amazon Macie
     * Classic. An error code and an error message are provided for each failed
     * item.</p>
     */
    inline AssociateS3ResourcesResult& WithFailedS3Resources(const Aws::Vector<FailedS3Resource>& value) { SetFailedS3Resources(value); return *this;}

    /**
     * <p>(Discontinued) S3 resources that couldn't be associated with Amazon Macie
     * Classic. An error code and an error message are provided for each failed
     * item.</p>
     */
    inline AssociateS3ResourcesResult& WithFailedS3Resources(Aws::Vector<FailedS3Resource>&& value) { SetFailedS3Resources(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) S3 resources that couldn't be associated with Amazon Macie
     * Classic. An error code and an error message are provided for each failed
     * item.</p>
     */
    inline AssociateS3ResourcesResult& AddFailedS3Resources(const FailedS3Resource& value) { m_failedS3Resources.push_back(value); return *this; }

    /**
     * <p>(Discontinued) S3 resources that couldn't be associated with Amazon Macie
     * Classic. An error code and an error message are provided for each failed
     * item.</p>
     */
    inline AssociateS3ResourcesResult& AddFailedS3Resources(FailedS3Resource&& value) { m_failedS3Resources.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FailedS3Resource> m_failedS3Resources;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
