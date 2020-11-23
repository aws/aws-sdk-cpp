/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/ParallelDataProperties.h>
#include <aws/translate/model/ParallelDataDataLocation.h>
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
namespace Translate
{
namespace Model
{
  class AWS_TRANSLATE_API GetParallelDataResult
  {
  public:
    GetParallelDataResult();
    GetParallelDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetParallelDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of the parallel data resource that is being retrieved.</p>
     */
    inline const ParallelDataProperties& GetParallelDataProperties() const{ return m_parallelDataProperties; }

    /**
     * <p>The properties of the parallel data resource that is being retrieved.</p>
     */
    inline void SetParallelDataProperties(const ParallelDataProperties& value) { m_parallelDataProperties = value; }

    /**
     * <p>The properties of the parallel data resource that is being retrieved.</p>
     */
    inline void SetParallelDataProperties(ParallelDataProperties&& value) { m_parallelDataProperties = std::move(value); }

    /**
     * <p>The properties of the parallel data resource that is being retrieved.</p>
     */
    inline GetParallelDataResult& WithParallelDataProperties(const ParallelDataProperties& value) { SetParallelDataProperties(value); return *this;}

    /**
     * <p>The properties of the parallel data resource that is being retrieved.</p>
     */
    inline GetParallelDataResult& WithParallelDataProperties(ParallelDataProperties&& value) { SetParallelDataProperties(std::move(value)); return *this;}


    /**
     * <p>The location of the most recent parallel data input file that was
     * successfully imported into Amazon Translate. The location is returned as a
     * presigned URL that has a 30 minute expiration.</p>
     */
    inline const ParallelDataDataLocation& GetDataLocation() const{ return m_dataLocation; }

    /**
     * <p>The location of the most recent parallel data input file that was
     * successfully imported into Amazon Translate. The location is returned as a
     * presigned URL that has a 30 minute expiration.</p>
     */
    inline void SetDataLocation(const ParallelDataDataLocation& value) { m_dataLocation = value; }

    /**
     * <p>The location of the most recent parallel data input file that was
     * successfully imported into Amazon Translate. The location is returned as a
     * presigned URL that has a 30 minute expiration.</p>
     */
    inline void SetDataLocation(ParallelDataDataLocation&& value) { m_dataLocation = std::move(value); }

    /**
     * <p>The location of the most recent parallel data input file that was
     * successfully imported into Amazon Translate. The location is returned as a
     * presigned URL that has a 30 minute expiration.</p>
     */
    inline GetParallelDataResult& WithDataLocation(const ParallelDataDataLocation& value) { SetDataLocation(value); return *this;}

    /**
     * <p>The location of the most recent parallel data input file that was
     * successfully imported into Amazon Translate. The location is returned as a
     * presigned URL that has a 30 minute expiration.</p>
     */
    inline GetParallelDataResult& WithDataLocation(ParallelDataDataLocation&& value) { SetDataLocation(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a parallel data resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline const ParallelDataDataLocation& GetAuxiliaryDataLocation() const{ return m_auxiliaryDataLocation; }

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a parallel data resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline void SetAuxiliaryDataLocation(const ParallelDataDataLocation& value) { m_auxiliaryDataLocation = value; }

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a parallel data resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline void SetAuxiliaryDataLocation(ParallelDataDataLocation&& value) { m_auxiliaryDataLocation = std::move(value); }

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a parallel data resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline GetParallelDataResult& WithAuxiliaryDataLocation(const ParallelDataDataLocation& value) { SetAuxiliaryDataLocation(value); return *this;}

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a parallel data resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline GetParallelDataResult& WithAuxiliaryDataLocation(ParallelDataDataLocation&& value) { SetAuxiliaryDataLocation(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to update a parallel data resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline const ParallelDataDataLocation& GetLatestUpdateAttemptAuxiliaryDataLocation() const{ return m_latestUpdateAttemptAuxiliaryDataLocation; }

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to update a parallel data resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline void SetLatestUpdateAttemptAuxiliaryDataLocation(const ParallelDataDataLocation& value) { m_latestUpdateAttemptAuxiliaryDataLocation = value; }

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to update a parallel data resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline void SetLatestUpdateAttemptAuxiliaryDataLocation(ParallelDataDataLocation&& value) { m_latestUpdateAttemptAuxiliaryDataLocation = std::move(value); }

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to update a parallel data resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline GetParallelDataResult& WithLatestUpdateAttemptAuxiliaryDataLocation(const ParallelDataDataLocation& value) { SetLatestUpdateAttemptAuxiliaryDataLocation(value); return *this;}

    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to update a parallel data resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline GetParallelDataResult& WithLatestUpdateAttemptAuxiliaryDataLocation(ParallelDataDataLocation&& value) { SetLatestUpdateAttemptAuxiliaryDataLocation(std::move(value)); return *this;}

  private:

    ParallelDataProperties m_parallelDataProperties;

    ParallelDataDataLocation m_dataLocation;

    ParallelDataDataLocation m_auxiliaryDataLocation;

    ParallelDataDataLocation m_latestUpdateAttemptAuxiliaryDataLocation;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
