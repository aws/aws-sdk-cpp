/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/NodeCounts.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class GetSignalCatalogResult
  {
  public:
    AWS_IOTFLEETWISE_API GetSignalCatalogResult();
    AWS_IOTFLEETWISE_API GetSignalCatalogResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetSignalCatalogResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the signal catalog. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the signal catalog. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p> The name of the signal catalog. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p> The name of the signal catalog. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p> The name of the signal catalog. </p>
     */
    inline GetSignalCatalogResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the signal catalog. </p>
     */
    inline GetSignalCatalogResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the signal catalog. </p>
     */
    inline GetSignalCatalogResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the signal catalog. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the signal catalog. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the signal catalog. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the signal catalog. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the signal catalog. </p>
     */
    inline GetSignalCatalogResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the signal catalog. </p>
     */
    inline GetSignalCatalogResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the signal catalog. </p>
     */
    inline GetSignalCatalogResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline GetSignalCatalogResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline GetSignalCatalogResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline GetSignalCatalogResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The total number of network nodes specified in a signal catalog. </p>
     */
    inline const NodeCounts& GetNodeCounts() const{ return m_nodeCounts; }

    /**
     * <p> The total number of network nodes specified in a signal catalog. </p>
     */
    inline void SetNodeCounts(const NodeCounts& value) { m_nodeCounts = value; }

    /**
     * <p> The total number of network nodes specified in a signal catalog. </p>
     */
    inline void SetNodeCounts(NodeCounts&& value) { m_nodeCounts = std::move(value); }

    /**
     * <p> The total number of network nodes specified in a signal catalog. </p>
     */
    inline GetSignalCatalogResult& WithNodeCounts(const NodeCounts& value) { SetNodeCounts(value); return *this;}

    /**
     * <p> The total number of network nodes specified in a signal catalog. </p>
     */
    inline GetSignalCatalogResult& WithNodeCounts(NodeCounts&& value) { SetNodeCounts(std::move(value)); return *this;}


    /**
     * <p> The time the signal catalog was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The time the signal catalog was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p> The time the signal catalog was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p> The time the signal catalog was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline GetSignalCatalogResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The time the signal catalog was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline GetSignalCatalogResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the signal catalog was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>The last time the signal catalog was modified.</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>The last time the signal catalog was modified.</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>The last time the signal catalog was modified.</p>
     */
    inline GetSignalCatalogResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The last time the signal catalog was modified.</p>
     */
    inline GetSignalCatalogResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_arn;

    Aws::String m_description;

    NodeCounts m_nodeCounts;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
