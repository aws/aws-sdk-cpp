/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/SourceType.h>
#include <aws/core/utils/DateTime.h>
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
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents a single occurrence of something interesting within the system.
   * Some examples of events are creating a cluster, adding or removing a cache node,
   * or rebooting a node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/Event">AWS
   * API Reference</a></p>
   */
  class Event
  {
  public:
    AWS_ELASTICACHE_API Event() = default;
    AWS_ELASTICACHE_API Event(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API Event& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier for the source of the event. For example, if the event
     * occurred at the cluster level, the identifier would be the name of the
     * cluster.</p>
     */
    inline const Aws::String& GetSourceIdentifier() const { return m_sourceIdentifier; }
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }
    template<typename SourceIdentifierT = Aws::String>
    void SetSourceIdentifier(SourceIdentifierT&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::forward<SourceIdentifierT>(value); }
    template<typename SourceIdentifierT = Aws::String>
    Event& WithSourceIdentifier(SourceIdentifierT&& value) { SetSourceIdentifier(std::forward<SourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the origin of this event - a cluster, a parameter group, a security
     * group, etc.</p>
     */
    inline SourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(SourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline Event& WithSourceType(SourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the event.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    Event& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::Utils::DateTime>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::Utils::DateTime>
    Event& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet = false;

    SourceType m_sourceType{SourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_date{};
    bool m_dateHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
