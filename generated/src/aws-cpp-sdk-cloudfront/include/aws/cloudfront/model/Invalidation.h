/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/InvalidationBatch.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>An invalidation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/Invalidation">AWS
   * API Reference</a></p>
   */
  class Invalidation
  {
  public:
    AWS_CLOUDFRONT_API Invalidation() = default;
    AWS_CLOUDFRONT_API Invalidation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API Invalidation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The identifier for the invalidation request. For example:
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Invalidation& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the invalidation request. When the invalidation batch is
     * finished, the status is <code>Completed</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Invalidation& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the invalidation request was first made.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    Invalidation& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current invalidation information for the batch request.</p>
     */
    inline const InvalidationBatch& GetInvalidationBatch() const { return m_invalidationBatch; }
    inline bool InvalidationBatchHasBeenSet() const { return m_invalidationBatchHasBeenSet; }
    template<typename InvalidationBatchT = InvalidationBatch>
    void SetInvalidationBatch(InvalidationBatchT&& value) { m_invalidationBatchHasBeenSet = true; m_invalidationBatch = std::forward<InvalidationBatchT>(value); }
    template<typename InvalidationBatchT = InvalidationBatch>
    Invalidation& WithInvalidationBatch(InvalidationBatchT&& value) { SetInvalidationBatch(std::forward<InvalidationBatchT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    InvalidationBatch m_invalidationBatch;
    bool m_invalidationBatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
