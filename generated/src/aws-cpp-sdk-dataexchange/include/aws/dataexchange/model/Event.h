/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/RevisionPublished.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>What occurs to start an action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/Event">AWS
   * API Reference</a></p>
   */
  class Event
  {
  public:
    AWS_DATAEXCHANGE_API Event() = default;
    AWS_DATAEXCHANGE_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>What occurs to start the revision publish action.</p>
     */
    inline const RevisionPublished& GetRevisionPublished() const { return m_revisionPublished; }
    inline bool RevisionPublishedHasBeenSet() const { return m_revisionPublishedHasBeenSet; }
    template<typename RevisionPublishedT = RevisionPublished>
    void SetRevisionPublished(RevisionPublishedT&& value) { m_revisionPublishedHasBeenSet = true; m_revisionPublished = std::forward<RevisionPublishedT>(value); }
    template<typename RevisionPublishedT = RevisionPublished>
    Event& WithRevisionPublished(RevisionPublishedT&& value) { SetRevisionPublished(std::forward<RevisionPublishedT>(value)); return *this;}
    ///@}
  private:

    RevisionPublished m_revisionPublished;
    bool m_revisionPublishedHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
